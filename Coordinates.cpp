/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Header file                                                   COORDINATES */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-17                                                       */
/* ************************************************************************* */

#include "Coordinates.h"

// CONSTRUCTOR
Coordinates::Coordinates() : m_x(0.L), m_y(0.L), m_z(0.L) {}
Coordinates::Coordinates(const long double &x, const long double &y, const long double &z) : m_x(x), m_y(y), m_z(z) {}
