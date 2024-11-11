#include <iostream>
#pragma once

class   Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &a);
		Brain &operator=(const Brain &a);
};