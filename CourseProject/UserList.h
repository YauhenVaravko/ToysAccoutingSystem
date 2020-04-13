#pragma once
#include "User.h"
#include <vector>
#include "AddUserScreen.h"
#include "DeleteUserScreen.h"
#include "PrintUserScreen.h"
#include "EditUserScreen.h"
class UserList
{
private: 
	vector<User> users;
		
public:
	UserList();
	~UserList();
	UserList(vector<User> &users_);
	vector<User> getUserList();
	void addUser();
	void deleteUser();
	void printUsers();
	void editUser();
};

