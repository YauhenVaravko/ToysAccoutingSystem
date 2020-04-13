#pragma once
#include<vector>
#include "Toy.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include "EditToyScreen.h"
#include "IndividualTaskScreen.h"
#include "AddToyScreen.h"
#include "deleteToyScreen.h"
#include "SortToyScreen.h"
#include "FindToysScreen.h"
using namespace std;
class ToyList
{
private:
	vector<Toy> toys;
public:
	ToyList();
	~ToyList();
	ToyList(vector<Toy> toys_);
	vector<Toy> getList();
	void addToyInList();
	void printAllToys();
	void deleteToy();
	void editToy();
	void individualTask();
	void sortToy();
	void findToy();
};
