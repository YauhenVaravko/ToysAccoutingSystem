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
		cout << "Такого номера нет в ассортименте" << endl;
		cout << "Пожалуйста, введите новый номер" << endl;
		number = dus.deleteUser();
	}
	cout << "Вы дейтвительно хотите удалить данную игрушку" << endl;
	cout << "1 - Да / 2 - Нет" << endl;
	int choice;
	cin >> choice;
	while ((choice != 1) and (choice != 2))
	{
		cout << "Ваши действия программен не ясны" << endl;
		cout << "Вы дейтвительно хотите удалить данную игрушку" << endl;
		cout << "1 - Да / 2 - Нет" << endl;
		cin >> choice;
	}
	if (choice == 1)
	{
		users.erase(users.begin() + number);
		cout << "Пользователь удален" << endl;
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
	cout << "введите номер пользователя, который хотите изменить" << endl;
	cout << "введите -1 чтобы отменить действие" << endl;
	int num;
	cin >> num;
	if (num == -1) return;
	while (num >= users.size())
	{
		cout << "Такого номера нет в списке пользователей" << endl;
		cout << "Пожалуйста, введите новый номер" << endl;
		cin >> num;
	}
	EditUserScreen eus = EditUserScreen();
	eus.editUser(users[num]);
}