// RightTriangle.h
#ifndef RIGHTTRIANGLE_H
#define RIGHTTRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B) 
        : Triangle(a, b, c, A, B, 90) {
        if (C != 90) {
            throw GeometryError("Угол C должен быть 90 для прямоугольного треугольника.");
        }
    }

    void print_info() const override {
        std::cout << "Прямоугольный треугольник: стороны a=" << a << " b=" << b << " c=" << c
                  << ", углы A=" << A << " B=" << B << " C=90\n";
    }
};

#endif // RIGHTTRIANGLE_H