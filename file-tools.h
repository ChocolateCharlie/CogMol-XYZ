/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* file-tools.h                                                   FILE TOOLS */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-06                                                       */
/* ************************************************************************* */

#ifndef FILE_TOOLS_H_INCLUDED
#define FILE_TOOLS_H_INCLUDED

#include <fstream>
#include <iostream>
#include <string>

#include "global.h"

#include "Molecule.h"

void load_file(const std::string &f, const std::string &ext);
void load_xyz_file(const std::string &f);
void read_xyz_file(std::ifstream &f);

#endif // FILE_TOOLS_H_INCLUDED

