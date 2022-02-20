cmake_minimum_required(VERSION 3.21.3)
project(DB)
set(CMAKE_CXX_STANDARD 17)


set(HEADER_FILES Headers/clients.hpp Headers/masters.hpp Headers/tables.hpp)
set(SOURCES main.cpp ${HEADER_FILES})

add_executable(DB ${SOURCES})
