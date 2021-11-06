/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* global.h                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-06                                                       */
/* ************************************************************************* */

#ifndef GLOBAL_H_INCLUDED
#define GLOBAL_TOOLS_H_INCLUDED

#include <vector>

#include "Molecule.h"

// Loaded molecules are stored in a global variable to allow access anywhere in
// the code (TODO: evaluate the pros and cons of this approach).
extern std::vector<Molecule> g_molecules;

#endif // GLOBAL_H_INCLUDED

