cmake_minimum_required(VERSION 3.10)
project(observer)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS 
    include/Observer.hpp
    include/DisplayElement.hpp
    include/Subject.hpp
    include/WeatherData.hpp
    include/CurrentConditionsDisplay.hpp
    include/ForecastDisplay.hpp
    include/HeatIndexDisplay.hpp
    include/StatisticsDisplay.hpp
    )

set(SRC
    src/WeatherData.cpp
    src/CurrentConditionsDisplay.cpp
    src/ForecastDisplay.cpp
    src/HeatIndexDisplay.cpp
    src/StatisticsDisplay.cpp 
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})