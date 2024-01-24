#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _type.getType() << std::endl;
}