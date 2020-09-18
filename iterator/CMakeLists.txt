cmake_minimum_required(VERSION 3.10)
project(iterator)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/CafeMenu.hpp
    include/CafeMenuIterator.hpp
    include/DinerMenu.hpp
    include/DinerMenuIterator.hpp
    include/Iterator.hpp
    include/Menu.hpp
    include/MenuItem.hpp
    include/PancakeHouseIterator.hpp
    include/PancakeHouseMenu.hpp
    include/Waitress.hpp
    )

set(SRC
    src/CafeMenu.cpp
    src/CafeMenuIterator.cpp
    src/DinerMenu.cpp
    src/DinerMenuIterator.cpp
    src/PancakeHouseIterator.cpp
    src/PancakeHouseMenu.cpp
    src/Waitress.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
