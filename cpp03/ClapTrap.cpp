
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a)
{
	a._name = this->_name;
	a._attackdamage = this->_attackdamage;
	a._energypoints = this->_energypoints;
	a._hitpoints = this->_hitpoints;
}