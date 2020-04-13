#pragma once
#include <vector>
#include <iostream>
#include "UserList.h"
#include <iomanip>
#include <string>

using namespace std;
class PrintUserScreen
{
public:
	PrintUserScreen();
	~PrintUserScreen();
	void printUser(vector<User> );
};

