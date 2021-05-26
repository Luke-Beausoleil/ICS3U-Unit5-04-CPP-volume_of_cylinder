// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

float VolumeOfCylinder(int height, int radius) {
    // this function finds the volume
    float volume;
    volume = M_PI * height * pow(radius, 2);

    return volume;
}

main() {
    // this function receives input and calls another function
    // variables
    std::string heightAsString;
    std::string radiusAsString;
    float heightAsFloat;
    float radiusAsFloat;
    int height;
    int radius;
    // input
    std::cout << "Enter the radius (cm): ";
    std::cin >> radiusAsString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightAsString;
    try {
        height = std::stoi(heightAsString);
        radius = std::stoi(radiusAsString);
        // check for integers
        heightAsFloat = std::stof(heightAsString);
        radiusAsFloat = std::stof(radiusAsString);
        if (height != heightAsFloat || radius != radiusAsFloat) {
            std::cout << "Invalid. Enter positive integers only\nDone."
                  << std::endl;
        } else if (radius < 0 || height < 0) {
            std::cout << "Invalid. Enter positive integers only\nDone."
                  << std::endl;
        } else {
            std::cout << std::setprecision(7) << "The volume is "
                  << VolumeOfCylinder(height, radius) << "cm³\nDone."
                  << std::endl;
            // 4 decimals would only be produced if the precision was set to 7
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid. Enter positive integers only\nDone."
              << std::endl;
    }
}
