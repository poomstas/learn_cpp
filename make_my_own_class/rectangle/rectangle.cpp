#include <iostream>
#include "rectangle.h"

// Constructor Functions
Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(float initial_width, float initial_height) {
    width = initial_width;
    height = initial_height;
}


// Get functions
float Rectangle::getWidth() {
    return width;
}

float Rectangle::getHeight() {
    return height;
}


// Set functions
void Rectangle::setWidth(float new_width) {
    width = new_width;
}

void Rectangle::setHeight(float new_height) {
    height = new_height;
}


// Rectangle Functions
float Rectangle::calculateArea() {
    return height * width;
}

void Rectangle::compareAreas(Rectangle new_rect) {
    float first_rectangle_area = this->calculateArea(); // Equivalent to self.calculateArea() in Python

    if (first_rectangle_area > new_rect.calculateArea()) {
        std::cout << "The first rectangle is larger." << std::endl;
    } else if (first_rectangle_area < new_rect.calculateArea()) {
        std::cout << "The second rectangle is larger." << std::endl;
    } else {
        std::cout << "The two rectangles are equal in area." << std::endl;
    }
}