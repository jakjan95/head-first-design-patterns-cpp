cmake_minimum_required(VERSION 3.10)
project(compound-patterns)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/AbstractDuckFactory.hpp
    include/CountingDuckFactory.hpp
    include/DuckCall.hpp
    include/DuckFactory.hpp
    include/Flock.hpp
    include/GooseAdapter.hpp
    include/Goose.hpp
    include/MallardDuck.hpp
    include/Observable.hpp
    include/Observer.hpp
    include/Quackable.hpp
    include/QuackCounter.hpp
    include/QuackObservable.hpp
    include/Quackologist.hpp
    include/RedheadDuck.hpp
    include/RubberDuck.hpp
    )

add_executable(${PROJECT_NAME} main.cpp)

set(FLAGS -Wall -Wextra -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
