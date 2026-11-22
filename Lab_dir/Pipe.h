#pragma once

#include <iostream>
#include <string>


class Pipe
{
private:
	std::string name;
	double length;
	double diameter;
	bool repairstat;
public:
	Pipe();

	void readConsole();
	void printConsole() const;

	void changeRep(bool status);

	void save(std::ostream& out) const;
	void load(std::istream& in);

	std::string getName() const;
	double getLength() const;
	double getDiameter() const;
	bool getRepstat() const;
};


