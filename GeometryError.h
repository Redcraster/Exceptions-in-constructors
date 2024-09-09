// GeometryError.h
#ifndef GEOMETRYERROR_H
#define GEOMETRYERROR_H

#include <stdexcept>

class GeometryError : public std::domain_error {
public:
    explicit GeometryError(const std::string& message) : std::domain_error(message) {}
};

#endif // GEOMETRYERROR_H