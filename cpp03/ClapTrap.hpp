
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int         _hitpoints;
		int         _energypoints;
		int         _attackdamage;

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator = (const ClapTrap &a);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};