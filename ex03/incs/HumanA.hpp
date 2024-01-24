#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	private:
		std::string _name;
		Weapon &_type;
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA();
		void attack();
};

#endif