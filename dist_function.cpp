#include <iostream>

float distance(float velocity, float time_elapsed); // function declaration

int main(){
    std::cout << distance(1.2, 3.0) << std::endl;
    std::cout << distance(2, 3.0) << std::endl;
}

float distance(float velocity, float time_elapsed) {
    return velocity * time_elapsed;
}
