#include "CS.h"

#include <iostream>
#include <string>

using namespace std;

CS::CS() : name("Unknown"), totalWS(0), workingWS(0), stationClass("Unknown") {}

void CS::readConsole() {
	cout << "Введите название Компрессорной станции: ";
	cin >> name;

	cout << "Введите число цехов: ";
	while (!(cin >> totalWS) || totalWS <= 0) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Неправильный тип данных, напишите правильный";
	}

	cout << "Введите число работающих цехов: ";
	while (!(cin >> workingWS) || workingWS < 0) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Неправильный тип данных, напишите правильный";
	}

	cout << "Введите класс станции: ";
	cin >> name;
}



