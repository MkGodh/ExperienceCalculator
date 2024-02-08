#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");

	int experience;
	int currentLevel = 1;
	int firstLevel = 1000;
	int secondLevel = 2500;
	int thirdLevel = 5000;
	int lvlCap = 10000;

	std::cout << "Введите число очков опыта: ";
	std::cin >> experience;

	if (experience >= firstLevel && experience < secondLevel) {

		std::cout << "Ваш текущий уровень персонажа: " << currentLevel + 1; "\n";
	}
	else if (experience >= secondLevel && experience < thirdLevel) {

		std::cout << "Ваш текущий уровень персонажа: " << currentLevel + 2; "\n";
	}
	else if (experience >= thirdLevel && experience < lvlCap) {

		std::cout << "Ваш текущий уровень персонажа: " << currentLevel + 3; "\n";
	}
	else {
		if (experience > thirdLevel)
		{
			std::cout << "Вы на капе уровней! Ждите новый аддон!";
		}
		if (experience < 0)
		{
			std::cout << "Вы ввели неверное значени!";
		}
	}
}
