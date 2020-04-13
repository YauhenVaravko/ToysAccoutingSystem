#pragma once
#include "Toy.h"
#include "ToyList.h"
#include <string>
#include <vector>
#include <iostream>
#include "PrintToysScreen.h"
using namespace std;
class SortToyScreen
{
public:
	SortToyScreen();
	~SortToyScreen();
	void sortToys(vector<Toy> toys);
	
};

