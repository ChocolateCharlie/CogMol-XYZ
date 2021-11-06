/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* file-tools.cpp                                                 FILE TOOLS */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-06                                                       */
/* ************************************************************************* */

#include "file-tools.h"

/* ************************************************************************* */
/*                                 GENERAL                                   */
/* ************************************************************************* */

void load_file(const std::string &f, const std::string &ext) {
	std::string full_ext = "." + ext;
	int ext_size = full_ext.size();
	// Ensure the file has a correct extension
	if (f.size() < ext_size || !(f.compare(f.size() - ext_size, ext_size, full_ext) == 0)) {
		throw std::invalid_argument("Expected extension " + full_ext + " for " + f + " file");
	}
	// Load file
	std::ifstream file(f.c_str());
	// Ensure the file can be opened
	if (!file) {
		throw std::runtime_error(f + " could not be opened");
	}
	// Read file
	if (ext == "xyz")	{ read_xyz_file(file); }
}

/* ************************************************************************* */
/*                                XYZ FILES                                  */
/* ************************************************************************* */

void load_xyz_file(const std::string &f) {
	load_file(f, "xyz");
}

void read_xyz_file(std::ifstream &f) {
	int nb_atoms;
	std::string mol_name;

	f >> nb_atoms >> mol_name;

	Molecule new_molecule(mol_name, nb_atoms);
	g_molecules.push_back(new_molecule);
}

