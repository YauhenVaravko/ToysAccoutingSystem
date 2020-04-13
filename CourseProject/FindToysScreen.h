#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Toy.h"
#include "ToyList.h"
#include "PrintToysScreen.h"

using namespace std;
class FindToysScreen
{	
public:
	FindToysScreen();
	~FindToysScreen();
	void findToys(vector<Toy> toys);
};

