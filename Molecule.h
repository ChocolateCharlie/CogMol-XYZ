/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Molecule.h                                                       MOLECULE */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-01                                                       */
/* ************************************************************************* */

#ifndef MOLECULE_H_INCLUDED
#define MOLECULE_H_INCLUDED

#include <iostream>
#include <string>

class Molecule {
	public:
		Molecule();
		Molecule(const std::string &name, const unsigned int &nb_atoms);

	private:
		void show(std::ostream &stream = std::cout) const;

		std::string		m_name;			// Molecule's name
		unsigned int	m_nb_atoms;	// Number of atoms forming the molecule

	friend std::ostream& operator<<(std::ostream &stream, const Molecule &m);
};

#endif // MOLECULE_H_INCLUDED

