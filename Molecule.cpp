/* ************************************************************************* */
/*                                                    THE COGMOL-XYZ PROJECT */
/* Molecule.cpp                                                     MOLECULE */
/* By: ChocolateCharlie                                                      */
/* Updated: 2021-11-01                                                       */
/* ************************************************************************* */

#include <iostream>
#include <string>

#include "Molecule.h"

/* ************************************************************************* */
/*                              PUBLIC METHODS                               */
/* ************************************************************************* */
// CONSTRUCTORS
Molecule::Molecule() : m_name("New molecule"), m_nb_atoms(0) {}
Molecule::Molecule(const std::string &name, const unsigned int &nb_atoms) : m_name(name), m_nb_atoms(nb_atoms) {}

/* ************************************************************************* */
/*                              PRIVATE METHODS                              */
/* ************************************************************************* */
// CONSTANT METHODS
void Molecule::show(std::ostream &stream) const {
	stream << m_name << " (" << m_nb_atoms << (m_nb_atoms > 1 ? " atoms)" : " atom)");
}

/* ************************************************************************* */
/*                              FRIEND METHODS                               */
/* ************************************************************************* */
// OPERATORS
std::ostream& operator<<(std::ostream &stream, const Molecule &m) {
	m.show();
	return(stream);
}

