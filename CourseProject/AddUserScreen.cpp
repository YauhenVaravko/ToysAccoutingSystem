#include "AddUserScreen.h"



AddUserScreen::AddUserScreen()
{
}


AddUserScreen::~AddUserScreen()
{
}

User AddUserScreen::addOneUser()
{
	cout << "������� ����� �����" << endl;
	cin >> ulogin;
	cout << "������� ������" << endl;
	cin >> upassword;
	cout << "������� ������� �������" << endl;
	cout << "1-�������������/2-������������" << endl;
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