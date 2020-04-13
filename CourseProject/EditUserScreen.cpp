#include "EditUserScreen.h"



EditUserScreen::EditUserScreen()
{
}


EditUserScreen::~EditUserScreen()
{
}

void EditUserScreen::editUser(User &users_)
{
	
	cout << "экран редактирования записи о пользователе" << endl;
	cout << endl;
	cout << "1)изменить логин" << endl;
	cout << "2)изменить пароль" << endl;
	cout << "3)изменить роль" << endl;
	

	int number;
	cin >> number;
	switch (number)
	{
	case 1:
	{
		string newLogin;
		cout << "введите новый логин" << endl;
		cin >> newLogin;
		users_.setLogin(newLogin);
		break;
	}
	case 2:
	{
		string newPassword;
		cout << "введите новую цену" << endl;
		cin >> newPassword;
		users_.setPassword(newPassword);
		break;
	}
	case 3:
	{	
		bool newIsAdmin;
		cout << "введите новую роль" << endl;
		cout << "1-Администратор/2-Пользователь" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			newIsAdmin = true;
			break;
		case 2:
			newIsAdmin = false;
			break;
		default:
			break;
		}
		users_.setIsAdmin(newIsAdmin);
		break;
	}
	

	default:
		break;
	}

}