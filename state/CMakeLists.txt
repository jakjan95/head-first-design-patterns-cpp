cmake_minimum_required(VERSION 3.10)
project(state)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/GumballMachine.hpp
    include/HasQuarterState.hpp
    include/NoQuarterState.hpp
    include/SoldOutState.hpp
    include/SoldState.hpp
    include/State.hpp
    include/WinnerState.hpp
    )

set(SRC
    src/GumballMachine.cpp
    src/HasQuarterState.cpp
    src/NoQuarterState.cpp
    src/SoldOutState.cpp
    src/SoldState.cpp
    src/WinnerState.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
