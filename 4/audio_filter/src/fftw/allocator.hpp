#pragma once

#include <cstddef>
#include <limits>
#include <memory>

#include <fftw3.h>


namespace fftw {

template <typename T>
class fftw_allocator
{
public:
	using value_type = T;
	using size_type = std::size_t;

	fftw_allocator() = default;

	template <typename U>
	constexpr fftw_allocator(const fftw_allocator<U>&) noexcept {};

	T* allocate(std::size_t n) {
		if (n == 0) return nullptr;
		if (n > std::numeric_limits<size_type>::max / sizeof(T)) throw std::bad_array_new_length();
		T* ptr = static_cast<T*>(fftw_malloc(n * sizeof(T)));
		if (!ptr) throw std::bad_alloc();
		return ptr;
	}

	void deallocate(T* p, std::size_t n) {
		fftw_free(p);
	}
};

template<typename T, typename U>
bool operator==(const fftw_allocator<T>&, const fftw_allocator<U>&) { return true; }

template<typename T, typename U>
bool operator!=(const fftw_allocator<T>&, const fftw_allocator<U>&) { return false; }

}