#pragma once
#include "Farmer.h"
#include <vector>
#include <iostream>


class Farm
{

public:

	void Run();
	void Buy();
	void Sell();
	void view();


	std::vector<std::string> farmersanimals;
	std::vector<int> values;
	
};


