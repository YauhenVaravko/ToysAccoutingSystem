#pragma once
#include <vector>
#include <iostream>
#include "Toy.h"
#include <iomanip>
#include <cmath>
#include "ToyList.h"
#include "PrintToysScreen.h"
using namespace std;
class IndividualTaskScreen
{
public:
	IndividualTaskScreen();
	~IndividualTaskScreen();
	void runIndividualTask(vector<Toy> vec);
};

