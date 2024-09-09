// main.cpp
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "GeometryError.h"

int main() {
    try {
        RightTriangle rt(3, 4, 5, 30, 60);
        rt.print_info();
    } catch (const GeometryError& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }

    try {
        IsoscelesTriangle it(10, 20, 50, 60);
        it.print_info();
    } catch (const GeometryError& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }

    try {
        EquilateralTriangle et(30);
        et.print_info();
    } catch (const GeometryError& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }

    try {
        Quadrilateral q(10, 20, 30, 40, 90, 90, 90, 90);
        q.print_info();
    } catch (const GeometryError& e) {
        std::cout << "Ошибка: " << e.what() << "\n";
    }

    return 0;
}
