#pragma once
#include<string>
#include"competitor.h"


class gorg : public competitor
{
public:
	gorg();
	
	virtual void GetAttacked() override;

private:
	
	int max_shield; 
};

