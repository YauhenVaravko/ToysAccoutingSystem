#pragma once
#include "Toy.h"
#include "ToyList.h"
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class PrintToysScreen
{
public:
	PrintToysScreen();
	~PrintToysScreen();
	int decs(double num);
	template <typename T>
	int coutNum(T num);
	void print(vector<Toy> toys);
};

