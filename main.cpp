/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* main.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-06                                                       */
/* ************************************************************************* */

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "file-tools.h"
#include "global.h"

#include "Molecule.h"

// Define global variables
std::vector<Molecule> g_molecules;

/* ************************************************************************* */
/*                            THE MAIN FUNCTION                              */
/* ************************************************************************* */

int main(int argc, char *argv[]) {
	// TODO: Greetings
	// TODO: load atom's informations

	// Read each file sequentialy
	try {
		// Ensure that there is at least one argument
		if (!(argc - 1)) {	// Skip first argument since it's the program's name
			throw std::runtime_error("no argument found");
		}
		for (int i = 1; i < argc; i++) {
			try {
				std::string arg_file = argv[i];
				load_xyz_file(arg_file);
			}
			catch(std::exception const &e) {
				std::cerr << "CogMol-XYZ ERROR : " << e.what() << std::endl;
			}
		}
	}
	catch(std::exception const &e) {
		std::cerr << "CogMol-XYZ ERROR : " << e.what() << std::endl;
	}

	// Print molecules on standard output
	for (int i = 0; i < g_molecules.size(); i++) {
		std::cout << g_molecules[i] << std::endl;
	}

	return(0);
}

