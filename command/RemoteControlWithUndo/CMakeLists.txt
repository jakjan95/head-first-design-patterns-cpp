cmake_minimum_required(VERSION 3.10)
project(command-pattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(HEADERS   
    include/CeilingFan.hpp
    include/CeilingFanOffCommand.hpp
    include/CeilingFanOnCommand.hpp
    include/Command.hpp
    include/GarageDoorDownCommand.hpp
    include/GarageDoor.hpp
    include/GarageDoorUpCommand.hpp
    include/Light.hpp
    include/LightOffCommand.hpp
    include/LightOnCommand.hpp
    include/MacroCommand.hpp
    include/NoCommand.hpp
    include/RemoteControlWithUndo.hpp
    include/Stereo.hpp
    include/StereoOffCommand.hpp
    include/StereoOnWithCDCommand.hpp
    include/TV.hpp
    include/TVOffCommand.hpp
    include/TVOnCommand.hpp
    )

add_executable(${PROJECT_NAME} main.cpp)
set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)
target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
