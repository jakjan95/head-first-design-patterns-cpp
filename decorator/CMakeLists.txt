cmake_minimum_required(VERSION 3.10)
project(decorator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/Beverage.hpp
    include/CondimentDecorator.hpp
    include/DarkRoast.hpp
    include/Decaf.hpp
    include/Espresso.hpp
    include/HouseBlend.hpp
    include/Milk.hpp
    include/Mocha.hpp
    include/Soy.hpp
    include/Whip.hpp
    )

set(SRC
    src/Milk.cpp
    src/Mocha.cpp
    src/Soy.cpp
    src/Whip.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})