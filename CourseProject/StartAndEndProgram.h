#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include "Toy.h"
#include "ToyList.h"
#include "User.h"
#include "UserList.h"
#include "AuthenticationAndMenu.h"


using namespace std;
class StartAndEndProgram
{
private:
	vector<Toy> vec_toy;
	vector<User> vec_user;

public:
	StartAndEndProgram();
	~StartAndEndProgram();
	StartAndEndProgram(vector<Toy> & vec1, vector<User>& vec2);
	void readFileAndStartProgram();
	void writeFile();
	vector<Toy>& getVectorToy();
	vector<User>& getVectorUser();
};

