// EquilateralTriangle.h
#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double a)
        : Triangle(a, a, a, 60, 60, 60) {}

    void print_info() const override {
        std::cout << "Равносторонний треугольник: стороны a=" << a
                  << ", углы A=60 B=60 C=60\n";
    }
};

#endif // EQUILATERALTRIANGLE_H