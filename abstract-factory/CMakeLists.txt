cmake_minimum_required(VERSION 3.10)
project(abstract-factory)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/Cheese.hpp
    include/CheesePizza.hpp
    include/Dough.hpp
    include/MarinaraSauce.hpp
    include/NYPizzaIngredientFactory.hpp
    include/NYPizzaStore.hpp
    include/Pizza.hpp
    include/PizzaIngredientFactory.hpp
    include/PizzaStore.hpp
    include/ReggianoCheese.hpp
    include/Sauce.hpp
    include/ThinCrustDough.hpp
    )

set(SRC
    src/Pizza.cpp
    src/PizzaStore.cpp
    src/NYPizzaStore.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
