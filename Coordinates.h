/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Coordinates.h                                                 COORDINATES */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-17                                                       */
/* ************************************************************************* */

#ifndef COORDINATES_H_INCLUDED
#define COORDINATES_H_INCLUDED

#include <iomanip>
#include <iostream>
#include <limits>

class Coordinates {
    public:
        Coordinates();
        Coordinates(const long double &x = 0.L, const long double &y = 0.L, const long double &z = 0.L);

    private:
        void show(std::ostream &stream = std::cout) const;

        long double m_x;
        long double m_y;
        long double m_z;

    friend std::ostream& operator<<(std::ostream &stream, const Coordinates &c);
};

#endif // COORDINATES_H_INCLUDED
