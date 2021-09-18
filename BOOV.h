#pragma once

#include<string>
#include "competitor.h"

class BOOV : public competitor{
	
public:
	BOOV(const std::string& NAME, int HEALTH, int SHIELD);
	virtual void GetAttacked() override;

private:
	
};