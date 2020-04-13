#include "AddUserScreen.h"



AddUserScreen::AddUserScreen()
{
}


AddUserScreen::~AddUserScreen()
{
}

User AddUserScreen::addOneUser()
{
	cout << "введите новый логин" << endl;
	cin >> ulogin;
	cout << "введите пароль" << endl;
	cin >> upassword;
	cout << "введите уровень доступа" << endl;
	cout << "1-Администратор/2-Пользователь" << endl;
	int n;
	cin >> n;
	switch (n)
	{
	case 1: 
		uIsAdmin = true;
		break;
	case 2: 
		uIsAdmin = false;
		break;
	default:
		break;
	}
	
	return User(ulogin, upassword, uIsAdmin);
}