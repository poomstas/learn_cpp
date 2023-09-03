#include <iostream>

int main() {
    char traffic_light = 'r';

    if (traffic_light == 'g') {
        std::cout << "Keep Driving" << std::endl;
    }
    else if (traffic_light == 'r') {
        std::cout << "Stop" << std::endl;
    }
    else if (traffic_light == 'y') {
        std::cout << "Slow Down" << std::endl;
    }
    else {
        std::cout << "No Traffic Light Detected" << std::endl;
    }
    return 0;
}