/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Atom.h                                                               ATOM */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-08-17                                                       */
/* ************************************************************************* */

#ifndef ATOM_H_INCLUDED
#define ATOM_H_INCLUDED

#include <string>

#include "Coordinates.h"

class Atom {
    public:
        Atom();

    private:
        Coordinates m_coordinates;
        std::string m_name;
};

#endif // ATOM_H_INCLUDED
