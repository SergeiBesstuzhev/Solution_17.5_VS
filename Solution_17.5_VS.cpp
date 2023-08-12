#include <iostream>
#include "Math.h"

class Vector {
public:
    Vector() : x(5), y(5), z(5) {}
    Vector(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
    void ShowVector() {
        std::cout << "Vector: " << x << ", " << y << ", " << z;
    }
    void ShowVectorLength() {
        std::cout << "Vector length: " << sqrt((pow(x, 2) + pow(y, 2) + pow(z, 2)));
    }
private:
    float x;
    float y;
    float z;
};

int main()
{
    Vector V;
    V.ShowVector();
    V.ShowVectorLength();
}