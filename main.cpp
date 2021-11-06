/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* main.cpp                                                                  */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-06                                                       */
/* ************************************************************************* */

#include <fstream>
#include <iostream>
#include <string>

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
				// Ensure the file has a correct extension
				if (arg_file.size() < 5 || !(arg_file.compare(arg_file.size() - 4, 4, ".xyz") == 0)) {
					throw std::invalid_argument(arg_file + " has wrong extension");
				}
				// Load file
				std::ifstream xyz_file(arg_file.c_str());
				// Ensure the file can be opened
				if (!xyz_file) {
					throw std::runtime_error(arg_file + " could not be opened");
				}
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

