cmake_minimum_required(VERSION 3.10)
project(facade-pattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(HEADERS   
    include/Amplifier.hpp
    include/CdPlayer.hpp
    include/HomeTheaterFacade.hpp
    include/PopcornPopper.hpp
    include/Projector.hpp
    include/Screen.hpp
    include/StreamingPlayer.hpp
    include/TheaterLights.hpp
    include/Tuner.hpp
    )

    
add_executable(${PROJECT_NAME} main.cpp)
set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
