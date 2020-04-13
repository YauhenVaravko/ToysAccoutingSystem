#include "Toy.h"



Toy::Toy()
{
}


Toy::~Toy()
{
}

Toy::Toy(string name_, double cost_, int count_, int minAgeRestrictions_, int maxAgeRestrictions_)
{
	
	name = name_;
	cost = cost_;
	count = count_;
	minAgeRestrictions = minAgeRestrictions_;
	maxAgeRestrictions = maxAgeRestrictions_;
}

string Toy::getName()
{
	
	return name;
}

double Toy::getCost()
{
	
	return cost;
}

int Toy::getCount()
{
	
	return count;
}

int Toy::getMinAgeRestrictions()
{
	
	return minAgeRestrictions;
}

int Toy::getMaxAgeRestrictions()
{
	
	return maxAgeRestrictions;

}

void Toy::setName(string newName)
{
	
	name = newName;
}

void Toy::setCost(double newCost)
{
	
	cost = newCost;

}

void Toy::setCount(int newCount)
{
	
	count = newCount;
}

void Toy::setMinAgeRestrictions(int newMinAgeRestrictions)
{
	
	minAgeRestrictions = newMinAgeRestrictions;
}

void Toy::setMaxAgeRestrictions(int newMaxAgeRestrictions)
{
	
	maxAgeRestrictions = newMaxAgeRestrictions;
}