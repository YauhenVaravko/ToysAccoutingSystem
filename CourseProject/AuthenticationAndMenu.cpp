#include "AuthenticationAndMenu.h"



AuthenticationAndMenu::AuthenticationAndMenu()
{
}

AuthenticationAndMenu::AuthenticationAndMenu(ToyList &toy_list_,UserList &user_list_)
{
	toy_list = toy_list_; 
	user_list = user_list_;
}

AuthenticationAndMenu::~AuthenticationAndMenu()
{
}

ToyList AuthenticationAndMenu::getToyList() {
	return toy_list;
}
UserList AuthenticationAndMenu::getUserList()
{
	return user_list;
}
void AuthenticationAndMenu::autentication()
{	
	
	string a_login, a_password;
	cout << "��� ������ ������� -1" << endl;
	cout << "������� �����" << endl;
	cin >> a_login;
	if (a_login == "-1") { return; }
	cout << "������� ������" << endl;
	cin >> a_password;
	int k = 0;
	int numus=-1;

	for (int i = 0; i < user_list.getUserList().size(); i++)
	{
		if ((user_list.getUserList()[i].getLogin() == a_login) and (user_list.getUserList()[i].getPassword() == a_password))
		{
			k=1;
			numus = i;
		}
	}
	if (k==0)
	{
		cout << "������������ ����� ��� ������. ��������� �������" << endl;
		autentication();
	}
	if (numus != -1)
	{
		if (user_list.getUserList()[numus].getIsAdmin() == true)
		{
			system("cls");
			adminMenu();
		}
		else
		{
			system("cls");
			simpleUserMenu();
		}
	}
}

void AuthenticationAndMenu::adminMenu()
{
	
	cout << "���� ��������������" << endl;
	cout << endl;
	cout << "������ � �������� ��������" << endl;
	cout << "1)�������� ������� �������" << endl;
	cout << "2)���������� ����� ������� ������" << endl;
	cout << "3)�������� ������� ������" << endl;
	cout << "4)��������� ������� ������" << endl;
	cout  << endl;
	cout << "������ � �������" << endl;
	cout << "5)�������� ������������ �������" << endl;
	cout << "6)���������� �������" << endl;
	cout << "7)�������� �������" << endl;
	cout << "8)��������� �������" << endl;
	cout << "0) ����� � ���� ��������������" << endl;

	int numMenu;
	cin >> numMenu;
	switch (numMenu)
	{
	case 1:
		system("cls");
		user_list.printUsers();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 2:
		system("cls");
		user_list.addUser();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 3:
		system("cls");
		user_list.deleteUser();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 4:
		system("cls");
		user_list.editUser();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 5:
		system("cls");
		toy_list.printAllToys();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 6:
		system("cls");
		toy_list.addToyInList();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 7:
		system("cls");
		toy_list.deleteToy();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 8:
		system("cls");
		toy_list.editToy();
		system("pause");
		system("cls");
		adminMenu();
		break;
	case 0:
		system("cls");
		autentication();
	default:
		break;
	}
}

void AuthenticationAndMenu::simpleUserMenu()
{
	setlocale(LC_ALL, "rus");
	cout << "���� ������������" << endl;
	cout << endl;
	cout << "1)�������� ������������ �������" << endl;
	cout << "2)������������� �������" << endl;
	cout << "3)����������" << endl;
	cout << "4)����� ������� �� ��������" << endl;
	cout << "0) ����� � ���� ��������������" << endl;

	int numMenu;
	cin >> numMenu;
	switch (numMenu)
	{
	case 1:
		system("cls");
		toy_list.printAllToys();
		system("pause");
		system("cls");
		simpleUserMenu();
		break;
	case 2:
		system("cls");
		toy_list.individualTask();
		system("pause");
		system("cls");
		simpleUserMenu();
		break;
	case 3:
		system("cls");
		toy_list.sortToy();
		system("pause");
		system("cls");
		simpleUserMenu();
		break;
	case 4:
		system("cls");
		toy_list.findToy();
		system("pause");
		system("cls");
		simpleUserMenu();
		break;
	
	case 0:
		system("cls");
		autentication();
	default:
		break;
	}
}