cmake_minimum_required(VERSION 3.10)
project(composite)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/MenuComponent.hpp
    include/Menu.hpp
    include/MenuItem.hpp
    include/Waitress.hpp
    )

set(SRC
    src/MenuComponent.cpp
    src/Menu.cpp
    src/MenuItem.cpp
    src/Waitress.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

#set(FLAGS -Wall -Wextra -Wconversion -Wpedantic)

#target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
