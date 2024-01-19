#include "Zombie.hpp"

int	main()
{
	Zombie *horde;
	int cnt = 10;

	horde = zombieHorde(cnt, "zombie");
	for (int i = 0; i < cnt; i++) {
		horde[i].announce();
	}
	delete[] horde;
}