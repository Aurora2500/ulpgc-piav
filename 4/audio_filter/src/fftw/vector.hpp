#pragma once

#include <vector>

#include "allocator.hpp"

namespace fftw {

template<typename T>
using vector = std::vector<T, fftw_allocator<T>>;

}