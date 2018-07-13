cmake_minimum_required(VERSION 3.10)
project(GPEC)

set(CMAKE_CXX_STANDARD 11)

add_executable(GPEC main.cpp Datastructs/Stack.cpp Datastructs/Stack.h Datastructs/Node.cpp Datastructs/Node.h Datastructs/Queue.cpp Datastructs/Queue.h)