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
	cout << "введите название игрушки" << endl;
	cin >> tname;
	cout << "введите стоимость" << endl;
	cin >> tcost;
	cout << "введите количество" << endl;
	cin >> tcount;
	cout << "введите минимальное возврастное ограничение" << endl;
	cin >> tminAge;
	cout << "введите максимальное возврастное оганичение" << endl;
	cin >> tmaxAge;
	Toy t = Toy(tname, tcost, tcount, tminAge, tmaxAge);
	return t;
}