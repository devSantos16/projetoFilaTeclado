cmake_minimum_required(VERSION 3.17)
project(ControleCarga C)

set(CMAKE_C_STANDARD 99)

add_executable(ControleCarga main.c vetor.h vetor.c menu.c menu.h)