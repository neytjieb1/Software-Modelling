cmake_minimum_required(VERSION 3.17)
project(Decorator_Composite CUDA)

set(CMAKE_CUDA_STANDARD 14)

add_executable(Decorator_Composite main.cu)

set_target_properties(
        Decorator_Composite
        PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)