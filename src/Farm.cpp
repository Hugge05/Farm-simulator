#include "Farm.h"

void Farm::Run()
{
	while (true)
	{
		std::cout << "Välkommen till den här farm simulatorn!" << "\n";
		// start meny
		std::cout << "1. Köp ett djur" << "\n";
		std::cout << "2. Sälj ett djur" << "\n";
		std::cout << "3. Se vilka djur hur mycket djur du har hemma på gården" << "\n";
		std::cout << "4. Stäng av programmet" << "\n";

		int input;
		std::cin >> input;

		switch (input)
		{
		case 1:

			Buy();
			std::cin.get();

			break;
		case 2: 
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
	std::cout << "Du har valt att köpa ett djur! Såhär mycket pengar har du (Kr) " + Bonde.cash << "\n";
	std::cout << "Dessa djur är tillgängliga att köpa!" << "\n";
	
	std::string djurarter[] = {"Gris", "ko","höns"",Hästar", "Får"};
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
