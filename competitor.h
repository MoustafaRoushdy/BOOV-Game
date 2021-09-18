#pragma once
#include<string>

class competitor
{
public:

	competitor(const std::string& NAME, int HELATH, int SHIELD);
	std::string GetName() const;
	int GetHealth() const ;
	int GetShield() const ;
	bool IsDefeated() const;
	virtual void GetAttacked() = 0;



	
protected:
	std::string name; 
	int health; 
	int shield; 
};

