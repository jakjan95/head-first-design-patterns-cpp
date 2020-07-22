cmake_minimum_required(VERSION 3.10)
project(factory-method)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/ChicagoPizzaStore.hpp
    include/ChicagoStyleCheesePizza.hpp
    include/ChicagoStyleClamPizza.hpp
    include/ChicagoStylePepperoniPizza.hpp
    include/ChicagoStyleVeggiePizza.hpp
    include/NYPizzaStore.hpp
    include/NYStyleCalmPizza.hpp
    include/NYStyleCheesePizza.hpp
    include/NYStylePepperoniPizza.hpp
    include/NYStyleVeggiePizza.hpp
    include/Pizza.hpp
    include/PizzaStore.hpp
    )

set(SRC
    src/ChicagoPizzaStore.cpp
    src/NYPizzaStore.cpp
    src/Pizza.cpp
    src/PizzaStore.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
