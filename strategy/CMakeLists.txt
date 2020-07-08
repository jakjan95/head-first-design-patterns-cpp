cmake_minimum_required(VERSION 3.10)
project(strategy)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS 
    include/Duck.hpp
    include/MallardDuck.hpp
    include/ModelDuck.hpp
    include/FlyBehavior.hpp
    include/QuackBehavior.hpp
    include/Quack.hpp
    include/Squeak.hpp
    include/MuteQuack.hpp
    include/FlyWithWings.hpp
    include/FlyNoWay.hpp
    include/FlyRocketPowered.hpp
    include/DuckCall.hpp  
    )

set(SRC
    src/Duck.cpp
    src/MallardDuck.cpp
    src/ModelDuck.cpp
    src/Quack.cpp
    src/Squeak.cpp
    src/MuteQuack.cpp
    src/FlyWithWings.cpp
    src/FlyNoWay.cpp
    src/FlyRocketPowered.cpp
    src/DuckCall.cpp   
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})