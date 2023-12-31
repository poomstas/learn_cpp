#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {
    float width = 0.2;
    float height = 2;

    Rectangle rectangle_one = Rectangle();
    Rectangle rectangle_two = Rectangle(width, height);

    cout << "2 - Width  " << rectangle_two.getWidth() << endl;
    cout << "2 - Height " << rectangle_two.getHeight() << endl;
    cout << "2 - Area   " << rectangle_two.calculateArea() << endl;

    cout << endl;

    cout << "Compare Areas: " << endl;
    rectangle_one.compareAreas(rectangle_two);

    return 0;
}