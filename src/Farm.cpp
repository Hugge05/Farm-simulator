#include "Farm.h"

void Farm::Run()
{
	while (true)
	{
		std::cout << "V�lkommen till den h�r farm simulatorn!" << "\n";
		// start meny
		std::cout << "1. K�p ett djur" << "\n";
		std::cout << "2. S�lj ett djur" << "\n";
		std::cout << "3. Se vilka djur hur mycket djur du har hemma p� g�rden" << "\n";
		std::cout << "4. St�ng av programmet" << "\n";

		int input;
		std::cin >> input;

		switch (input)
		{
		case 1:

			Buy();
			std::cin.get();

			break;

		case 4:
			return;
			break;

		}




	}



}

void Farm::Buy()
{
	Farmer Bonde;
	std::cout << "Du har valt att k�pa ett djur! S�h�r mycket pengar har du (Kr) " + Bonde.cash << "\n";
	std::cout << "Dessa djur �r tillg�ngliga att k�pa!" << "\n";
	
	std::string djurarter[] = {"Gris", "ko","h�ns"",H�star", "F�r"};
	//animals.push_back(djurarter);
	
	int animalvalues[] = {0,0,0,0,0};
	for (int i = 0; animalvalues[i] == 0; i++)
	{
		animalvalues[i] = rand() % 100 + 1;
		values.push_back(animalvalues[i]);
		std::cout << djurarter[i] << "\n";
		std::cout << animalvalues[i] << "\n";

	}

}

void Farm::Sell()
{
}

void Farm::view()
{
}
