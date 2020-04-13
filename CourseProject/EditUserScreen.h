#pragma once
#include "User.h"
#include "UserList.h"
#include <iostream>
#include <string>

using namespace std;
class EditUserScreen
{
public:
	EditUserScreen();
	~EditUserScreen();
	void editUser(User &users_);
};

