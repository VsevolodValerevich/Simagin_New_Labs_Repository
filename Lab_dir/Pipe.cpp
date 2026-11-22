#include "Pipe.h"
#include <iostream>
#include <string>

using namespace std;

Pipe::Pipe() : name("Unknown"), length(0.0), diameter(0.0), repairstat(false) {}

void Pipe::readConsole() {
	cout << "Введите название трубы (километровую отметку): ";
	cin >> name;

	cout << "Введите длину (км): ";
	while (!(cin >> length) || length <= 0) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Неправильный тип данных, напишите правильный";
	}

	cout << "Введите диаметр (мм): ";
	while (!(cin >> diameter) || diameter <= 0) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Неправильный тип данных, напишите правильный";
	}

	int repInput;
	cout << "Труба в ремонте? (1 - Да, 0 - Нет): ";
	while (!(cin >> repInput) || (repInput != 0 && repInput != 1)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Неправильный тип данных, напишите правильный";
	}
	repairstat = (repInput == 1);
}
