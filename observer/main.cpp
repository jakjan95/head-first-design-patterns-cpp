#include <iostream>

#include "WeatherData.hpp"
#include "CurrentConditionDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "HeatIndexDisplay.hpp"

int main(){
    std::cout<<"Observer pattern:\n\n";

    WeatherData weatherData;
    CurrentConditionsDisplay currentConditionDisplay(weatherData);
    StatisticsDisplay statisticsDisplay(weatherData);
    ForecastDisplay forecastDisplay(weatherData);
    HeatIndexDisplay heatIndexDisplay(weatherData);

    weatherData.setMeasurments(26.6, 65, 1000);
    weatherData.setMeasurments(21.5, 65, 990);
    weatherData.setMeasurments(25.5, 55, 899);
    weatherData.setMeasurments(21.5, 85, 1010);
    weatherData.setMeasurments(15.5, 65, 970);
    weatherData.setMeasurments(16.5, 65, 970);
    weatherData.setMeasurments(25.5, 90, 970);

    return 0;
}