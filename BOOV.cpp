#include "BOOV.h"

BOOV::BOOV(const std::string& NAME, int HEALTH, int SHIELD)
	: name(NAME),
	health(HEALTH),
	shield(SHIELD)
{
	//nothing here

}

int::BOOV:: GetHealth() const
{
	return health;
}

std::string BOOV::GetName() const
{
	return name;
}

int::BOOV::GetShield() const
{
	return shield;
}

bool::BOOV::IsDefeated() const
{
	return(health <= 0);
}
void::BOOV::GetAttacked()
{
	int roll = rand() % 100;
	if (0 == roll) health = 0;
	else if (roll <= 50)
	{
		shield -= (2 + (rand() % 4));
		if (shield <= 0)
		{
			health += shield;
			shield = 0;
		}
	}
	else if (roll <= 79)
		health -= (4 + (rand() % 5));

}
