cmake_minimum_required(VERSION 3.10)
project(abstract-factory)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)
include_directories(src)

set(HEADERS   
    include/BlackOlives.hpp
    include/Cheese.hpp
    include/CheesePizza.hpp
    include/ChicagoPizzaIngredientFactory.hpp
    include/ChicagoPizzaStore.hpp
    include/ClamPizza.hpp
    include/Clams.hpp
    include/Dough.hpp
    include/Eggplant.hpp
    include/FreshClams.hpp
    include/FrozenClams.hpp
    include/MarinaraSauce.hpp
    include/MozzarellaCheese.hpp
    include/Mushrooms.hpp
    include/NYPizzaIngredientFactory.hpp
    include/NYPizzaStore.hpp
    include/Onions.hpp
    include/Pepperoni.hpp
    include/PepperoniPizza.hpp
    include/Pizza.hpp
    include/PizzaIngredientFactory.hpp
    include/PizzaStore.hpp
    include/PlumTomatoSauce.hpp
    include/RedPeppers.hpp
    include/ReggianoCheese.hpp
    include/Sauce.hpp
    include/SlicedPepperoni.hpp
    include/Spinach.hpp
    include/ThickCrustDough.hpp
    include/ThinCrustDough.hpp
    include/VeggiePizza.hpp
    include/Veggies.hpp
    )

set(SRC
    src/CheesePizza.cpp
    src/ChicagoPizzaIngredientFactory.cpp
    src/ChicagoPizzaStore.cpp
    src/ClamPizza.cpp
    src/NYPizzaIngredientFactory.cpp
    src/NYPizzaStore.cpp
    src/PepperoniPizza.cpp
    src/Pizza.cpp
    src/PizzaStore.cpp
    src/VeggiePizza.cpp
    )

add_library(${PROJECT_NAME}-lib STATIC ${SRC})

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)

set(FLAGS -Wall -Wextra -Werror -Wconversion -Wpedantic)

target_compile_options(${PROJECT_NAME} PRIVATE ${FLAGS})
