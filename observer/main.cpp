#include <iostream>

#include "WeatherData.hpp"
#include "CurrentConditionDisplay.hpp"

int main(){
    std::cout<<"Hello!\n";

    WeatherData weatherData;
    CurrentConditionsDisplay currentConditionDisplay(weatherData);

    weatherData.setMeasurments(19.3, 75, 1000);
    weatherData.setMeasurments(21.5, 65, 990);

    return 0;
}