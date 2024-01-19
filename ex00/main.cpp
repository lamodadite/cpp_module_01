#include "Zombie.hpp"

int main()
{
	Zombie foo("foo");
	foo.announce();
	Zombie *myZombie = newZombie("newZombie");
	myZombie->announce();
	randomChump("randomZombie");

	delete myZombie;
}
