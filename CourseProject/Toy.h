#pragma once
#include <string>
using namespace std;
class Toy
{
public: string name;
		double cost;
		int count, minAgeRestrictions, maxAgeRestrictions;
public:
	Toy();
	~Toy();
	Toy(string name_, double cost_, int count_, int minAgeRestrictions_, int maxAgeRestrictions_);
	string getName();
	double getCost();
	int getCount();
	int getMinAgeRestrictions();
	int getMaxAgeRestrictions();
	void setName(string newName);
	void setCost(double newCost);
	void setCount(int newCount);
	void setMinAgeRestrictions(int newMinAgeRestrictions);
	void setMaxAgeRestrictions(int newMaxAgeRestrictions);
};

