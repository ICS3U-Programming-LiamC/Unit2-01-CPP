// Copyright (c) Year Your Name All rights reserved.
//
// Created by: Liam Csiffary
// Date: April 27, 2021
// This program calculates the area and perimeter of a circle
// with a radius of whatever the variable radius is = to

#include <iostream>
#include <cmath>

int radius = 15;

int main() {
    std::cout << "The area of a circle with a radius of " \
    << radius << "mm is \n";
    std::cout << M_PI*pow(radius, 2) << "mm^2 \n \n";

    std::cout << "The perimeter of a circle with a radius of " \
    << radius << "mm is \n";
    std::cout << M_PI*radius*2 << "mm"<< std::endl;
}
