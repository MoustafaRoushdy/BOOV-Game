#include "competitor.h"
 
#include<string>
competitor::competitor(const std::string& NAME, int HEALTH, int SHIELD)
    :name(NAME),
    health(HEALTH),
    shield(SHIELD)
{
    //NOTHING HERE..
}

std::string competitor::GetName()const
{
    return "name";
}

int competitor::GetHealth()const
{
    return health;
}

int competitor::GetShield()const
{
    return shield;
}

bool competitor::IsDefeated()const
{
    return health <= 0;
}
