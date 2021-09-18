#include "gorg.h"
#include <ctime>
#include "competitor.h"

gorg::gorg()
	:competitor("goorg",30,5),
	max_shield(5)
{
	//nothing here

}


void::gorg::GetAttacked()

{
	
	int roll = rand() % 100;
	if (roll < 15)
	{
		if (++shield > max_shield) --shield;
	}
	if (roll < 65)
	{
		shield -= (1 + rand() % 2);
		if (shield <= 0) health -= (5 + rand() % 6);
	}
}
	

