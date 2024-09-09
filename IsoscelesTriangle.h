// IsoscelesTriangle.h
#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B)
        : Triangle(a, b, a, A, B, A) {
        if (a != c || A != C) {
            throw GeometryError("Стороны a и c, углы A и C должны быть равны для равнобедренного треугольника.");
        }
    }

    void print_info() const override {
        std::cout << "Равнобедренный треугольник: стороны a=" << a << " b=" << b << " c=" << c
                  << ", углы A=" << A << " B=" << B << " C=" << C << "\n";
    }
};

#endif // ISOSCELESTRIANGLE_H