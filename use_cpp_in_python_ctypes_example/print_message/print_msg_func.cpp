#include <iostream>

extern "C" void print_msg(){
    std::cout << "Hi, this is message." << std::endl;
}