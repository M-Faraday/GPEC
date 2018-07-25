cmake_minimum_required(VERSION 3.5.1)
project(GPEC)

set(CMAKE_CXX_STANDARD 11)

add_executable(GPEC main.cpp Datastructs/Stack.h Datastructs/Node.h Datastructs/Queue.h Calculator/Calculator.cpp Calculator/Calculator.h Calculator/Token.cpp Calculator/Token.h Calculator/TokenTypes/Term.cpp Calculator/TokenTypes/Term.h Calculator/TokenTypes/Operators.cpp Calculator/TokenTypes/Operators.h Calculator/TokenTypes/ValueTypes/Real.cpp Calculator/TokenTypes/ValueTypes/Real.h)


