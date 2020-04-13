#pragma once
#include "User.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class AddUserScreen
{
private :
	string ulogin, upassword;
	bool uIsAdmin;
public:
	AddUserScreen();
	~AddUserScreen();
	User addOneUser();
};

