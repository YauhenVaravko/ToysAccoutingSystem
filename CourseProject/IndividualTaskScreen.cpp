#include "IndividualTaskScreen.h"



IndividualTaskScreen::IndividualTaskScreen()
{
}


IndividualTaskScreen::~IndividualTaskScreen()
{
}

void IndividualTaskScreen::runIndividualTask(vector<Toy> toys)
{
	
	int min, max;
	cout << "введите минимальное возврастное  ограничение" << endl;
	cin >> min;
	cout << "введите максимальное возврастное ограничение" << endl;
	cin >> max;
	PrintToysScreen pts = PrintToysScreen();
	
	cout << "________________________________________________________________________________" << endl;
	cout << "|№  |Имя игрушки                  |Цена         |Кол-во|Ораничения по возврасту|" << endl;
	cout << "|   |                             |             |      |    От    |    До      |" << endl;
	cout << "|___|_____________________________|_____________|______|__________|____________|" << endl;

	for (int i = 0; i < toys.size(); i++)
	{ 
		if ((toys[i].getMinAgeRestrictions() <= min) and (toys[i].getMaxAgeRestrictions() >= max))
		{
			cout << "|" << i << setw(3) << "|" <<
				toys[i].getName() << setw(30 - toys[i].getName().length()) << "|" <<
				toys[i].getCost() << setw(13 - pts.coutNum(toys[i].getCost()) - pts.decs(toys[i].getCost())) << "|"
				<< toys[i].getCount() << setw(7 - pts.coutNum(toys[i].getCount())) << "|" <<
				toys[i].getMinAgeRestrictions() << setw(11 - pts.coutNum(toys[i].getMinAgeRestrictions())) << "|"
				<< toys[i].getMaxAgeRestrictions() << setw(13 - pts.coutNum(toys[i].getMaxAgeRestrictions())) << "|" << endl;
		}
	}
	cout << "|______________________________________________________________________________|" << endl;
}
	
