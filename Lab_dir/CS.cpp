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

void CS::printConsole() const {
	cout << "Информация о Компрессорной станции\n";
	cout << "Общее количество цехов: " << totalWS << "\n";
	cout << "Число работающих цехов: " << workingWS << "\n";
	cout << "Класс станции: " << stationClass;
}

bool CS::startWs() {
	if (workingWS < totalWS) {
		workingWS++;
		return true;
	}
	else {
		return false;
	}
	
}

bool CS::stopWs() {
	if (workinWS > 0) {
		workingWS--;
		return true;
	}
	else {
		return false;
	}
}

void CS::save(ostream& out) const {
	out << name << " " << totalWS << " " << workingWS << " " << stationClass << "\n";
}

void CS::load(istream& in) {
	in >> name >> totalWS >> workingWS >> stationClass;
}

string CS::getName() const {
	return name

}

int CS::getTotalWS() const {
	return totalWS
}

int CS::getWorkingWS() const {
	return workingWS
}

string CS::getStationClass() const {
	return stationClass
}