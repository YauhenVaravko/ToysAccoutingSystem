#include "EditToyScreen.h"




EditToyScreen::EditToyScreen()
{
	
}

void EditToyScreen::editOneToy(Toy &editToy)
{
	
	cout << "экран редактирования записи об игрушке" << endl;
	cout << endl;
	cout << "1)изменить название"<<endl;
	cout << "2)изменить цену" << endl;
	cout << "3)изменить кол-во" << endl;
	cout << "4)изменить минимальный возврастной диапозон" << endl;
	cout << "5)изменить максимальный возврастной диапозон" << endl;

	int number;
	cin >> number;
	switch (number) 
	{
	case 1:
		{
		string newName;
		cout << "введите новое имя" << endl;
		cin >> newName;
		editToy.setName(newName);
		break;
		}
	case 2:
		{
		double newCost;
		cout << "введите новую цену" << endl;
		cin >> newCost;
		editToy.setCost(newCost);
		break;
		}
	case 3:
		{
		int newCount;
		cout << "введите новое количество" << endl;
		cin >> newCount;
		editToy.setCount(newCount);
		break;
		}
	case 4: 
		{
		int newMinAge;
		cout << "введите новые минимальные возврастные ограничения" << endl;
		cin >> newMinAge;
		editToy.setMinAgeRestrictions(newMinAge);
		break;
		}
	case 5:
		{
		int newMaxAge;
		cout << "введите новые максимальные возврастные ограничения" << endl;
		cin >> newMaxAge;
		editToy.setMaxAgeRestrictions(newMaxAge);
		break;
		}
	default:
		break;
	}

}

EditToyScreen::~EditToyScreen()
{
}
