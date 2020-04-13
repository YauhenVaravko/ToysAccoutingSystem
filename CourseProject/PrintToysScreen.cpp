#include "PrintToysScreen.h"




PrintToysScreen::PrintToysScreen()
{
}

PrintToysScreen::~PrintToysScreen()
{
}

int PrintToysScreen::decs(double num)
{
	int out = 0;
	while (double(int(num * pow(10, out))) != double(num * pow(10, out)))
	{
		out++;
	}
	return out;
}
template <typename T>
int PrintToysScreen::coutNum(T num)
{
	if (int(num) != 0) { return int(log10(int(num)) + 1); }
	else { return 1; }
}

void PrintToysScreen::print(vector<Toy> toys) {

	cout << "________________________________________________________________________________" << endl;
	cout << "|№  |Имя игрушки                  |Цена         |Кол-во|Ораничения по возврасту|" << endl;
	cout << "|   |                             |             |      |    От    |    До      |" << endl;
	cout << "|___|_____________________________|_____________|______|__________|____________|" << endl;
	for (int i = 0; i < toys.size(); i++)
	{
		cout << "|" << i << setw(3) << "|" <<
			toys[i].getName() << setw(30 - toys[i].getName().length()) << "|" <<
			toys[i].getCost() << setw(13 - coutNum(toys[i].getCost()) - decs(toys[i].getCost())) << "|"
			<< toys[i].getCount() << setw(7 - coutNum(toys[i].getCount())) << "|" <<
			toys[i].getMinAgeRestrictions() << setw(11 - coutNum(toys[i].getMinAgeRestrictions())) << "|"
			<< toys[i].getMaxAgeRestrictions() << setw(13 - coutNum(toys[i].getMaxAgeRestrictions())) << "|" << endl;
	}
	cout << "|______________________________________________________________________________|" << endl;
}