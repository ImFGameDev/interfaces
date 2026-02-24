cmake_minimum_required(VERSION 3.30)
project(interfaces_ex)

add_library(interfaces_ex INTERFACE)

target_include_directories(interfaces_ex INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)