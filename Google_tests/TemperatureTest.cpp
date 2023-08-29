//
// Created by felix on 2023-08-29.
//
#include "gtest/gtest.h"
#include "Temperature.h"

TEST(TemperatureTest, convertToCelsius){
    ASSERT_EQ(Temperature::convertToFahrenheit(123),-1);
}