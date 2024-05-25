cmake_minimum_required(VERSION 3.28)
project(Logger)

set(CMAKE_CXX_STANDARD 11)

add_executable(Logger main.cpp
        logger.h)
