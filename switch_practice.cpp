// Practice writing switch statements

#include <iostream>

int main() {
    // Write a program that outputs whether a vehicle is a motorcycle,
    // 2-door coupe, 4-door car or a 5-door mini-van. 
    // You should create a variable that holds the number of doors in the vehicle
    // A motorcycle would have doors = 0 for example. 
    // Then use a switch statement to output to the terminal the kind of vehicle
    // you have

    char vehicle;
    int doors = 4;

    switch (doors) {
        case 0:
            std::cout << "motorcycle" << std::endl;
            break;
        case 2:
            std::cout << "2-door coupe" << std::endl;
            break;
        case 4:
            std::cout << "4-door car" << std::endl;
            break;
        case 5:
            std::cout << "5-door mini-van" << std::endl;
            break;
    }

    std::cout << vehicle << std::endl;
    
    return 0;
}