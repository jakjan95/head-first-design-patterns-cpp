cmake_minimum_required(VERSION 3.10)
project(adapter-pattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(HEADERS   
    include/Duck.hpp
    include/MallardDuck.hpp
    include/TurkeyAdapter.hpp
    include/Turkey.hpp
    include/WildTurkey.hpp
    )

    
add_executable(${PROJECT_NAME} main.cpp)
set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
