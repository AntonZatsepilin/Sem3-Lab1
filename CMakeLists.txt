cmake_minimum_required(VERSION 3.22)
project(Lab1)

set(CMAKE_CXX_STANDARD 17)

add_executable(main
main.cpp
SmartPointers/UniquePtr/UniquePtr.hpp
SmartPointers/UniquePtr/UniquePtr.tpp
SmartPointers/SharedPtr/SharedPtr.hpp
SmartPointers/SharedPtr/SharedPtr.tpp
)

add_executable(tests
Tests.cpp
SmartPointers/UniquePtr/UniquePtr.hpp
SmartPointers/UniquePtr/UniquePtr.tpp
SmartPointers/SharedPtr/SharedPtr.hpp
SmartPointers/SharedPtr/SharedPtr.tpp
)