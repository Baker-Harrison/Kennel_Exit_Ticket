cmake_minimum_required(VERSION 3.28)
project(Kennel_Exit_Ticket)

set(CMAKE_CXX_STANDARD 17)

add_executable(Kennel_Exit_Ticket main.cpp
        src/Dog.cpp
        include/Dog.h
        src/Kennel.cpp
        include/Kennel.h)
