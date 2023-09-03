#include <iostream>

int main() {
    /* 
    * Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    * 
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    * 
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking, 
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking, 
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    */
    int variable = 1;
    char state = 'a'; // Note the use of single quotes and double quotes.

    if (variable >= 0) {
        std::cout << "positive" << std::endl;
    }
    else {
        std::cout << "negative" << std::endl;
    }

    if (state == 'a') {
        std::cout << "acceleration" << std::endl;
    }
    else if (state == 'b') {
        std::cout << "brake" << std::endl;
    }
    else if (state == 'p') {
        std::cout << "parked" << std::endl;
    }
    else {
        std::cout << "unknown" << std::endl;
    }

    return 0;

}