/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* main.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-06                                                       */
/* ************************************************************************* */

#include <fstream>
#include <iostream>
#include <string>

#include "file-tools.h"

/* ************************************************************************* */
/*                            THE MAIN FUNCTION                              */
/* ************************************************************************* */

int main(int argc, char *argv[]) {
	// TODO: Greetings

	// Read each file sequentialy
	try {
		// Ensure that there is at least one argument
		if (!(argc - 1)) {	// Skip first argument since it's the program's name
			throw std::runtime_error("no argument found");
		}
		for (int i = 1; i < argc; i++) {
			try {
				std::string arg_file = argv[i];
				std::ifstream xyz_file = load_xyz_file(arg_file);
				// TODO : do some computations here
				// Close file
				xyz_file.close();
			}
			catch(std::exception const &e) {
				std::cerr << "CogMol-XYZ ERROR : " << e.what() << std::endl;
			}
		}
	}
	catch(std::exception const &e) {
		std::cerr << "CogMol-XYZ ERROR : " << e.what() << std::endl;
	}

	return(0);
}

