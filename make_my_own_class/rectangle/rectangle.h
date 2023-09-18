#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

using namespace std;

class Rectangle {
    private:
        float width;
        float height;
    
    public:
        // Constructor Functions
        Rectangle();
        Rectangle(float, float);

        // Get functions
        float getWidth();
        float getHeight();

        // Set functions
        void setWidth(float);
        void setHeight(float);

        // Rectangle functions
        float calculateArea();
        void compareAreas(Rectangle);
};

#endif /* RECTANGLE_H */