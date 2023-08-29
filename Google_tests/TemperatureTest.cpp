//
// Created by felix on 2023-08-29.
//
#include "gtest/gtest.h"
#include "Temperature.h"

TEST(TemperatureTest, convertToFahrenheit){
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(-40),-40); //Equal
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(37),98.6f); //Body temp
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(0),32); // Freezing
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(-std::numeric_limits<float>::max()),-6125076e38); //Float -inf = inf
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(-std::numeric_limits<float>::max()),-6125077e38); //Float inf = inf +1, which is true
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(-std::numeric_limits<float>::infinity()),-6125077e38); //Float
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(std::numeric_limits<float>::infinity()),6125077e38);
    ASSERT_FLOAT_EQ(Temperature::convertToFahrenheit(std::numeric_limits<float>::quiet_NaN()),0);
}