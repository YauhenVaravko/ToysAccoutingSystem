#include "AddToyScreen.h"



AddToyScreen::AddToyScreen()
{
}


AddToyScreen::~AddToyScreen()
{
}

Toy AddToyScreen::addToy()
{
	string tname;
	float tcost;
	int tcount;
	int tminAge;
	int tmaxAge;
	cout << "������� �������� �������" << endl;
	cin >> tname;
	cout << "������� ���������" << endl;
	cin >> tcost;
	cout << "������� ����������" << endl;
	cin >> tcount;
	cout << "������� ����������� ����������� �����������" << endl;
	cin >> tminAge;
	cout << "������� ������������ ����������� ����������" << endl;
	cin >> tmaxAge;
	Toy t = Toy(tname, tcost, tcount, tminAge, tmaxAge);
	return t;
}