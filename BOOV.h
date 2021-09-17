#pragma once

#include<string>

class BOOV {
	
public:
	BOOV(const std::string& NAME, int HEALTH, int SHIELD);
	std::string GetName() const;
	int GetHealth() const;
	int GetShield() const;

	bool IsDefeated() const;
	void GetAttacked();

private:
	std::string name;
	int health;
	int shield;
};