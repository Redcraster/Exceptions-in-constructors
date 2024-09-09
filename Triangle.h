// Triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include "GeometryError.h"
#include <iostream>

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double a, double b, double c, double A, double B, double C) 
        : a(a), b(b), c(c), A(A), B(B), C(C) {
        if (A + B + C != 180) {
            throw GeometryError("Сумма углов треугольника не равна 180.");
        }
    }

    void print_info() const override {
        std::cout << "Треугольник: стороны a=" << a << " b=" << b << " c=" << c
                  << ", углы A=" << A << " B=" << B << " C=" << C << "\n";
    }
};

#endif // TRIANGLE_H