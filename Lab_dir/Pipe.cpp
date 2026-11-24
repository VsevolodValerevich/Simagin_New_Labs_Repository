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

void Pipe::printConsole() const {
	cout << "\nИнформация о трубе\n";
	cout << "Название: " << name << "\n";
	cout << "Длина: " << length << "км\n";
	cout << "Диаметр: " << diameter << "мм\n";
	cout << "Статус: " << (repairstat ? "Не" : "") << "работает";
}

void Pipe::changeRep(bool status) {
	repairstat = status;
}

void Pipe::save(ostream& out) const {
	out << name << " " << length << " " << diameter << " " << repairstat << "\n";
}

void Pipe::load(istream& in) {
	in >> name >> length >> diameter >> repairstat;
}

string Pipe::getName() const {
	return name;
}

double Pipe::getLength() const {
	return length;
}

double Pipe::getDiameter() const {
	return diameter;
}

bool Pipe::getRepstat() const {
	return repairstat;
}