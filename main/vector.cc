#include "vector.h"

#include <iostream>

void Point::offset(double offsetX, double offsetY) {
    x += offsetX; y += offsetY;
}

void Point::print() {
    std::cout << "()" << x << "," << ")";
}

void Vector::offset(double offsetX, double offsetY) {
    start.offset(offsetX, offsetY);
    end.offset(offsetX, offsetY);
}

void Vector::print() {
    start.print();
    std::cout << "->";
    end.print();
    std::cout << std::endl;
}

int main(){
    Point p();
}