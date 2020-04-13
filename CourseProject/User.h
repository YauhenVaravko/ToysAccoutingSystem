#pragma once
#include <string>
using namespace std;
class User
{
private: string login, password;
		 bool isAdmin;
public:
	User();
	~User();
	User(string log, string pas, bool is_admin);
	string getLogin();
	string getPassword();
	bool getIsAdmin();
	void setLogin(string newLogin);
	void setPassword(string newPassword);
	void setIsAdmin(bool newIsAdmin);
};

