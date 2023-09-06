#include <iostream>

int main() {
    char gear_status = 'N';

    switch(gear_status) {
        case 'D':
            std::cout << "Driving Forward" << std::endl;
            break;
        case 'N':
            std::cout << "Not Driving - Neutral" << std::endl;
            break;
        case 'P':
            std::cout << "Not Driving - Parked" << std::endl;
            break;
        case 'R':
            std::cout << "Driving in Reverse" << std::endl;
            break;
    }

    std::cout << "Your car is currently in gear: " <<
        gear_status << std::endl;

    return 0;
}