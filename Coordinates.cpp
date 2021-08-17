/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Coordinates.cpp                                               COORDINATES */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-17                                                       */
/* ************************************************************************* */

#include "Coordinates.h"

/* ************************************************************************* */
/*                              PUBLIC METHODS                               */
/* ************************************************************************* */
// CONSTRUCTOR
Coordinates::Coordinates() : m_x(0.L), m_y(0.L), m_z(0.L) {}
Coordinates::Coordinates(const long double &x, const long double &y, const long double &z) : m_x(x), m_y(y), m_z(z) {}

/* ************************************************************************* */
/*                              PRIVATE METHODS                              */
/* ************************************************************************* */
// CONSTANT METHODS
void Coordinates::show(std::ostream &stream) const {
    stream << std::setprecision(std::numeric_limits<long double>::digits10 + 1) << "(" << m_x << ";" << m_y << ";" << m_z << ")";
}

/* ************************************************************************* */
/*                              FRIEND METHODS                               */
/* ************************************************************************* */
// OPERATORS
std::ostream& operator<<(std::ostream &stream, const Coordinates &c) {
    c.show();
    return(stream);
}
