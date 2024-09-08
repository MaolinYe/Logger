cmake_minimum_required(VERSION 3.25)
project(Logger)

set(CMAKE_CXX_STANDARD 11)

add_executable(Logger main.cpp
        logger.h)
