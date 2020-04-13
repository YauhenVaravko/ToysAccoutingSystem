#pragma once
#include <iostream>
#include <vector>
#include "User.h"
#include "UserList.h"
#include "Toy.h"
#include "ToyList.h"
#include <string>

using namespace std;
class AuthenticationAndMenu
{private:
	ToyList toy_list;
	UserList user_list;
public:
	AuthenticationAndMenu();
	AuthenticationAndMenu(ToyList &toy_list, UserList  &user_list);
	~AuthenticationAndMenu();
	ToyList getToyList();
	UserList getUserList();
	void autentication();
	void adminMenu();
	void simpleUserMenu() ;
};

