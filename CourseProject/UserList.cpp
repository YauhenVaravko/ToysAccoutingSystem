#include "UserList.h"




UserList::UserList()
{
}


UserList::~UserList()
{
}

UserList::UserList(vector<User> &users_)
{
	users = users_;
}
vector<User> UserList::getUserList()
{
	return users;
}

void UserList::addUser()
{
	AddUserScreen aus = AddUserScreen();
	users.push_back(aus.addOneUser());
}

void UserList::deleteUser()
{
	DeleteUserScreen dus = DeleteUserScreen();
	int number;
	number = dus.deleteUser();
	while (number >= users.size())
	{
		cout << "������ ������ ��� � ������������" << endl;
		cout << "����������, ������� ����� �����" << endl;
		number = dus.deleteUser();
	}
	cout << "�� ������������ ������ ������� ������ �������" << endl;
	cout << "1 - �� / 2 - ���" << endl;
	int choice;
	cin >> choice;
	while ((choice != 1) and (choice != 2))
	{
		cout << "���� �������� ���������� �� ����" << endl;
		cout << "�� ������������ ������ ������� ������ �������" << endl;
		cout << "1 - �� / 2 - ���" << endl;
		cin >> choice;
	}
	if (choice == 1)
	{
		users.erase(users.begin() + number);
		cout << "������������ ������" << endl;
	}
	else
	{
		return;
	}
	
}

void UserList::printUsers()
{
	PrintUserScreen pus = PrintUserScreen();
	pus.printUser(users);
}

void UserList::editUser()
{
	cout << "������� ����� ������������, ������� ������ ��������" << endl;
	cout << "������� -1 ����� �������� ��������" << endl;
	int num;
	cin >> num;
	if (num == -1) return;
	while (num >= users.size())
	{
		cout << "������ ������ ��� � ������ �������������" << endl;
		cout << "����������, ������� ����� �����" << endl;
		cin >> num;
	}
	EditUserScreen eus = EditUserScreen();
	eus.editUser(users[num]);
}