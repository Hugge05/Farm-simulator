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
	std::cout << "Du har valt att k�pa ett djur! S�h�r mycket pengar har du (Kr) " + Bonde.cash << "\n";
	std::cout << "Dessa djur �r tillg�ngliga att k�pa!" << "\n";

	std::string djurarter[] = { "Gris", "ko","h�na", "H�st", "F�r" };
	//animals.push_back(djurarter);

	int animalvalues[] = { 0,0,0,0,0 };
	for (int i = 0; animalvalues[i] == 0; i++)
	{
		animalvalues[i] = rand() % 1000 + 200;
		values.push_back(animalvalues[i]);
		std::cout << djurarter[i] + ":" << "\n";
		std::cout << animalvalues[i] << "\n";

	}
	std::cout << "vilket djur vill du k�pa?" << "\n";
	std::cout << "1. Gris" << "\n";
	std::cout << "2. Ko" << "\n";
	std::cout << "3. h�ns" << "\n";
	std::cout << "4. H�st" << "\n";
	std::cout << "5. F�r" << "\n";

	int k�paDjur;
	std::cin >> k�paDjur;
	switch (k�paDjur)
	{
	case 1:
		std::cout << "Du vill k�pa en Gris! det kommer att kosta " + animalvalues[0] << "\n";
		std::cout << "Du har i pl�nboken: " + Bonde.cash << "\n";
		std::cout << "�r du s�ker p� att du vill genomf�ra detta k�p? Svara1 f�r  ja eller  2 f�r nej" << "\n";
		int godk�nnande1;
		std::cin >> godk�nnande1;
		switch (godk�nnande1)
		{
		case 1:
			std::cout << "Du har k�pt en " + djurarter[0] << "\n";
			Bonde.cash = Bonde.cash - animalvalues[0];
			std::cout << "Du har kvar: " + Bonde.cash << "\n";
			farmersanimals.push_back(djurarter[0]);
			std::cin.get();
			break;



		case 2:
			return;
			break;
		}


	case 2:
		std::cout << "Du vill k�pa en Ko! det kommer att kosta " + animalvalues[1] << "\n";
		std::cout << "Du har i pl�nboken: " + Bonde.cash << "\n";
		std::cout << "�r du s�ker p� att du vill genomf�ra detta k�p? Svara1 f�r  ja eller  2 f�r nej" << "\n";
		int godk�nnande2;
		std::cin >> godk�nnande2;
		switch (godk�nnande2)
		{
		case 1:
			std::cout << "Du har k�pt en " + djurarter[1] << "\n";
			Bonde.cash = Bonde.cash - animalvalues[1];
			std::cout << "Du har kvar: " + Bonde.cash << "\n";
			farmersanimals.push_back(djurarter[1]);
			std::cin.get();
			break;



		case 2:
			return;
			break;

			break;
		}
	case 3:
		std::cout << "Du vill k�pa en H�na! det kommer att kosta " + animalvalues[2] << "\n";
		std::cout << "Du har i pl�nboken: " + Bonde.cash << "\n";
		std::cout << "�r du s�ker p� att du vill genomf�ra detta k�p? Svara1 f�r  ja eller  2 f�r nej" << "\n";
		int godk�nnande3;
		std::cin >> godk�nnande3;
		switch (godk�nnande3)
		{
		case 1:
			std::cout << "Du har k�pt en " + djurarter[2] << "\n";
			Bonde.cash = Bonde.cash - animalvalues[2];
			std::cout << "Du har kvar: " + Bonde.cash << "\n";
			farmersanimals.push_back(djurarter[2]);
			std::cin.get();
			break;



		case 2:
			return;
			break;

			break;
		}
	case 4:
		std::cout << "Du vill k�pa en H�st! det kommer att kosta " + animalvalues[3] << "\n";
		std::cout << "Du har i pl�nboken: " + Bonde.cash << "\n";
		std::cout << "�r du s�ker p� att du vill genomf�ra detta k�p? Svara1 f�r  ja eller  2 f�r nej" << "\n";
		int godk�nnande4;
		std::cin >> godk�nnande4;
		switch (godk�nnande4)
		{
		case 1:
			std::cout << "Du har k�pt en " + djurarter[3] << "\n";
			
			std::cout << "Du har kvar: " + Bonde.cash << "\n";
			Bonde.cash = Bonde.cash - animalvalues[3];
			farmersanimals.push_back(djurarter[3]);
			std::cin.get();
			break;



		case 2:
			return;
			break;
			
		}
	}
}

void Farm::Sell()
{
}

void Farm::view()
{
}
