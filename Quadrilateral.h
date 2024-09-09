// Quadrilateral.h
#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "Figure.h"
#include "GeometryError.h"
#include <iostream>

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(double a, double b, double c, double d, double A, double B, double C, double D) 
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
        if (A + B + C + D != 360) {
            throw GeometryError("Сумма углов четырёхугольника не равна 360.");
        }
    }

    void print_info() const override {
        std::cout << "Четырёхугольник: стороны a=" << a << " b=" << b << " c=" << c << " d=" << d
                  << ", углы A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
    }
};

#endif // QUADRILATERAL_H
