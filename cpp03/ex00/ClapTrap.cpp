
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " generated " << "hitpoints 10 energypoints 10 attacdamage 0" << std::endl;
	this->_name = name;
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "Unnamed";
	this->_hitpoints = 10;
	this->_energypoints = 10;
	this->_attackdamage = 0;
}

ClapTrap::ClapTrap(ClapTrap& a)
{
	std::cout << "Copy constructor called" << std::endl;
	a._name = this->_name;
	a._attackdamage = this->_attackdamage;
	a._energypoints = this->_energypoints;
	a._hitpoints = this->_hitpoints;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl; 
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a)
{
	std::cout << "= operator oveloaded" << std::endl;	
	if (this == &a)
		return (*this);
	this->_name = a._name;
	this->_attackdamage = a._attackdamage;
	this->_energypoints = a._energypoints;
	this->_hitpoints = a._hitpoints;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitpoints <= 0)
	{
		std::cout << this->_name <<" has no hitpoints left" << std::endl;
		return ;
	}
	if (this->_energypoints <= 0)
	{
		std::cout << this->_name << " has no energypoints left" << std::endl;
		return ;
	}
	this->_energypoints--;
	std::cout << this->_name << " attacks " << target << " causing " << this->_attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints <= 0)
	{
		std::cout << this->_name << " has no hitpoints left" << std::endl;
		return ;
	}
	if (this->_energypoints <= 0)
	{
		std::cout << this->_name << " has no energypoints left" << std::endl;
		return ;
	}
	this->_hitpoints = this->_hitpoints + amount;
	this->_energypoints --;
	std::cout << this->_name << " repaired " << amount << " hitpoints " << "EP:: " << this->_energypoints << " HP:: " << this->_hitpoints <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints = this->_hitpoints - amount;
	std::cout << "ClapTrap " << this->_name << "took damage " << amount << "hitpoints " << "EP:: " << this->_energypoints << "HP:: " << this->_hitpoints <<std::endl;
}