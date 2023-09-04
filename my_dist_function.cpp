#include <iostream>

float calculate_dist(float velocity, float elapsed_time, float acceleration);

int main() {
    std::cout << calculate_dist(3, 4, 5) << std::endl;  
    std::cout << calculate_dist(7.0, 2.1, 5.4) << std::endl;

};

// distance = velocity × elapsedtime + 0.5 × acceleration × elapsedtime × elapsedtime
float calculate_dist(float velocity, float elapsed_time, float acceleration) {
    return velocity * elapsed_time + 0.5 * acceleration * elapsed_time * elapsed_time; // C++ functions can only have one output. Workarounds exist though.
};