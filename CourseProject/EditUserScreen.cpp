#include "EditUserScreen.h"



EditUserScreen::EditUserScreen()
{
}


EditUserScreen::~EditUserScreen()
{
}

void EditUserScreen::editUser(User &users_)
{
	
	cout << "����� �������������� ������ � ������������" << endl;
	cout << endl;
	cout << "1)�������� �����" << endl;
	cout << "2)�������� ������" << endl;
	cout << "3)�������� ����" << endl;
	

	int number;
	cin >> number;
	switch (number)
	{
	case 1:
	{
		string newLogin;
		cout << "������� ����� �����" << endl;
		cin >> newLogin;
		users_.setLogin(newLogin);
		break;
	}
	case 2:
	{
		string newPassword;
		cout << "������� ����� ����" << endl;
		cin >> newPassword;
		users_.setPassword(newPassword);
		break;
	}
	case 3:
	{	
		bool newIsAdmin;
		cout << "������� ����� ����" << endl;
		cout << "1-�������������/2-������������" << endl;
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