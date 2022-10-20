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


	std::vector<std::string> animals;
	std::vector<int> values;

};


