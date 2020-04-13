#include "DeleteUserScreen.h"



DeleteUserScreen::DeleteUserScreen()
{
}


DeleteUserScreen::~DeleteUserScreen()
{
}

int DeleteUserScreen::deleteUser()
{
	
	int n;
	cout << "введите номер пользователя, которого хотите удалить" << endl;
	cin >> n;
	return n;
}
