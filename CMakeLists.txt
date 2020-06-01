cmake_minimum_required(VERSION 3.16)
project(automated_monopoly)

set(CMAKE_CXX_STANDARD 20)

add_executable(automated_monopoly main.cpp Player.cpp Player.h Banker.cpp Banker.h Field.cpp Field.h boardCreator.cpp boardCreator.h singleTurn.h singleTurn.cpp)