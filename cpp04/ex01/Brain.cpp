#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain :: Default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain :: Default destructor called" << std::endl;
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain :: Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
}

Brain &Brain::operator=(const Brain &a)
{
	std::cout << "Brain :: Operator = overload" << std::endl;
	if(this == &a)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = a._ideas[i];
	return *this;
}