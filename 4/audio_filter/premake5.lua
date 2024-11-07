workspace "Audio-Filter"
	configurations { "Debug", "Release" }

project "audio_filter"
	kind "WindowedApp"
	language "C++"
	cppdialect "C++20"
	targetdir "."
	files { "src/**.hpp", "src/**.cpp"}
	includedirs { "src" }
	links { "m", "fftw3", "raylib" }

	filter "configurations:Debug"
		defines { "DEBUG" }
		debugger "GDB"
		symbols "ON"

	filter "configurations:Release"
		defines { "NDEBUG" }
		optimize "On"