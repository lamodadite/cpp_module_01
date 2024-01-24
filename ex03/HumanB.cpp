#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_type = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->_type == NULL) {
		std::cout << this->_name << " can't attack beacuase he don't have weapon!" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_type = &weapon;
}