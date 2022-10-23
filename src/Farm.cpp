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


		int antalköptadjur;
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

		case 3:
			view();
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
	std::cout << "Du har valt att köpa ett djur! Såhär mycket pengar har du (Kr) " + Bonde.cash << "\n";
	std::cout << "Dessa djur är tillgängliga att köpa!" << "\n";

	std::string djurarter[] = { "Gris", "ko","höna", "Häst", "Får" };
	//animals.push_back(djurarter);

	int animalValues[] = { 0,0,0,0,0 };
	for (int i = 0; animalValues[i] == 0; i++)
	{
		animalValues[i] = rand() % 1000 + 200;
		values.push_back(animalValues[i]);
		std::cout << djurarter[i] + ":" << "\n";
		std::cout << animalValues[i] << "\n";

	}
	std::cout << "vilket djur vill du köpa?" << "\n";
	std::cout << "1. Gris" << "\n";
	std::cout << "2. Ko" << "\n";
	std::cout << "3. höns" << "\n";
	std::cout << "4. Häst" << "\n";
	std::cout << "5. Får" << "\n";

	int köpaDjur;
	std::cin >> köpaDjur;
	switch (köpaDjur)
	{
	case 1:
		std::cout << "Du vill köpa en Gris! det kommer att kosta " + animalValues[0] << "\n";
		std::cout << "Du har i plånboken: " + Bonde.cash << "\n";
		std::cout << "Är du säker på att du vill genomföra detta köp? Svara1 för  ja eller  2 för nej" << "\n";
		int godKännande1;
		std::cin >> godKännande1;
		switch (godKännande1)
		{
		case 1:
			std::cout << "Du har köpt en " + djurarter[0] << "\n";
		    std::cout << "Du har kvar: " + Bonde.cash << "\n";
			farmersanimals.push_back(djurarter[0]);
			Bonde.cash = Bonde.cash - animalValues[0];
			std::cin.get();
			break;



		case 2:
			return;
			break;
			break;
		}


	case 2:
		std::cout << "Du vill köpa en Ko! det kommer att kosta " + animalValues[1] << "\n";
		std::cout << "Du har i plånboken: " + Bonde.cash << "\n";
		std::cout << "Är du säker på att du vill genomföra detta köp? Svara1 för  ja eller  2 för nej" << "\n";
		int godkännande2;
		std::cin >> godkännande2;
		switch (godkännande2)
		{
		case 1:
			std::cout << "Du har köpt en " + djurarter[1] << "\n";
			Bonde.cash = Bonde.cash - animalValues[1];
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
		std::cout << "Du vill köpa en Höna! det kommer att kosta " + animalValues[2] << "\n";
		std::cout << "Du har i plånboken: " + Bonde.cash << "\n";
		std::cout << "Är du säker på att du vill genomföra detta köp? Svara1 för  ja eller  2 för nej" << "\n";
		int godkännande3;
		std::cin >> godkännande3;
		switch (godkännande3)
		{
		case 1:
			std::cout << "Du har köpt en " + djurarter[2] << "\n";
			Bonde.cash = Bonde.cash - animalValues[2];
			std::cout << "Du har kvar: " + Bonde.cash << "\n";
			farmersanimals.push_back(djurarter[2]);
			Bonde.köptaDjur = djurarter[2];
			std::cin.get();
			break;



		case 2:
			return;
			break;

			break;
		}
	case 4:
		std::cout << "Du vill köpa en Häst! det kommer att kosta " + animalValues[3] << "\n";
		std::cout << "Du har i plånboken: " + Bonde.cash << "\n";
		std::cout << "Är du säker på att du vill genomföra detta köp? Svara1 för  ja eller  2 för nej" << "\n";
		int godkännande4;
		std::cin >> godkännande4;
		switch (godkännande4)
		{
		case 1:
			std::cout << "Du har köpt en " + djurarter[3] << "\n";

			std::cout << "Du har kvar: " + Bonde.cash << "\n";
			Bonde.cash = Bonde.cash - animalValues[3];
			farmersanimals.push_back(djurarter[3]);

			std::cin.get();
			break;
		case 5:
			std::cout << "Du vill köpa en får! det kommer att kosta " + animalValues[4] << "\n";
			std::cout << "Du har i plånboken: " + Bonde.cash << "\n";
			std::cout << "Är du säker på att du vill genomföra detta köp? Svara1 för  ja eller  2 för nej" << "\n";
			int godKännande5;
			std::cin >> godKännande5;
			switch (godKännande5)
			{
			case 1:
				std::cout << "Du har köpt en " + djurarter[4] << "\n";

				std::cout << "Du har kvar: " + Bonde.cash << "\n";
				Bonde.cash = Bonde.cash - animalValues[4];
				farmersanimals.push_back(djurarter[4]);

				std::cin.get();
				break;


			case 2:
				return;
				break;

			}
		}
	}
}

void Farm::Sell()
{




}

void Farm::view()
{
	Farmer Bonden;

	
	std::cout << "du har valt att kolla på vilka djur du har på gården" << "\n";
	
	for (int i = 0; i < farmersanimals.size(); i++)
	{
		std::cout << farmersanimals.at(i) << ' ' << "\n";

	}

	
	


}
