#include "User.h"



User::User()
{
}


User::~User()
{
}

User::User(string log, string pas, bool is_admin)
{
	login = log;
	password = pas;
	isAdmin = is_admin;
}

string User::getLogin() 
{
	return login;
}

string User::getPassword()
{
	return password;
}

bool User::getIsAdmin()
{
	return isAdmin;
}

void User::setLogin(string newLogin)
{
	login = newLogin;
}

void User::setPassword(string newPassword)
{
	password = newPassword;
}

void User::setIsAdmin(bool newIsAdmin)
{
	isAdmin = newIsAdmin;
}