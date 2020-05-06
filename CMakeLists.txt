cmake_minimum_required(VERSION 3.10)
project(performance_Pybind11)
set(CMAKE_CXX_STANDARD 14)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/tools")
set(pybind11_INCLUDE_DIR "pybind11/include")

#list(APPEND BoostComponents python3)

add_subdirectory(pybind11)
find_package(pybind11 2.0 REQUIRED)
pybind11_add_module(python_test python_module.cpp test_function.cpp)

add_executable(cpp_fib cpp_main.cpp test_function.cpp)

