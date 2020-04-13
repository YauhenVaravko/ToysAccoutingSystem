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
	cout << "для выхода нажмите -1" << endl;
	cout << "введите логин" << endl;
	cin >> a_login;
	if (a_login == "-1") { return; }
	cout << "введите пароль" << endl;
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
		cout << "неправильный логин или пароль. повторите попытку" << endl;
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
	
	cout << "меню администратора" << endl;
	cout << endl;
	cout << "Работа у учетными записями" << endl;
	cout << "1)Просмотр учетных записей" << endl;
	cout << "2)Добавление новой учетной записи" << endl;
	cout << "3)Удачение учетной записи" << endl;
	cout << "4)Изменение учетной записи" << endl;
	cout  << endl;
	cout << "Работа с данными" << endl;
	cout << "5)Просмотр асссортимета игрушек" << endl;
	cout << "6)Добавление игрушки" << endl;
	cout << "7)Удачение игрушки" << endl;
	cout << "8)Изменение игрушки" << endl;
	cout << "0) Назад к меню аутентификации" << endl;

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
	cout << "меню пользователя" << endl;
	cout << endl;
	cout << "1)Просмотр асссортимета игрушек" << endl;
	cout << "2)Индивидальное задание" << endl;
	cout << "3)Сортировка" << endl;
	cout << "4)Найти игрушку по названию" << endl;
	cout << "0) Назад к меню аутентификации" << endl;

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