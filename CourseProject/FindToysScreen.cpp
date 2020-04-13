#include "FindToysScreen.h"



FindToysScreen::FindToysScreen()
{
}


FindToysScreen::~FindToysScreen()
{
}

void FindToysScreen::findToys(vector<Toy> toys_)
{	
	
	cout << "введите название игрушки" << endl;
	string nameFindToy;

	cin >> nameFindToy;
	PrintToysScreen pts = PrintToysScreen();
	vector<Toy> vecWithFindToys;
	
	for (int i = 0; i < toys_.size(); i++) {
		size_t pos = toys_[i].getName().find(nameFindToy);
		if (pos != std::string::npos)
		{
			vecWithFindToys.push_back(toys_[i]);
		}
	}
	pts.print(vecWithFindToys);
}