cmake_minimum_required(VERSION 3.20)
project(UselessMathLibrary VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Biblioteka header-only
add_library(UselessMathLibrary INTERFACE)

target_include_directories(UselessMathLibrary INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
	$<INSTALL_INTERFACE:include>
)