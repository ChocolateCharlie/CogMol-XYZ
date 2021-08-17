/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Header file                                                   COORDINATES */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-17                                                       */
/* ************************************************************************* */

#ifndef COORDINATES_H_INCLUDED
#define COORDINATES_H_INCLUDED

class Coordinates {
    public:
        Coordinates();
        Coordinates(const long double &x = 0.L, const long double &y = 0.L, const long double &z = 0.L);

    private:
        long double m_x;
        long double m_y;
        long double m_z;
};

#endif // COORDINATES_H_INCLUDED
