#pragma once

#include <iostream>
#include <string>

class CS{
private:
	std::string name;
	int totalWS;
	int workingWS;
	std::string stationClass;
public:
	CS();

	void readConsole();
	void printConsole() const;

	bool startWs();
	bool stopWs();

	void save(std::ostream& out) const;
	void load(std::istream& in);

	std::string getName() const;
	int getTotalWS() const;
	int getWorkingWS() const;
	std::string getStationClass() const;
};

