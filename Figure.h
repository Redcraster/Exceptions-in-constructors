// Figure.h
#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
    virtual ~Figure() = default;
    virtual void print_info() const = 0;
};

#endif // FIGURE_H