#include "EditToyScreen.h"




EditToyScreen::EditToyScreen()
{
	
}

void EditToyScreen::editOneToy(Toy &editToy)
{
	
	cout << "����� �������������� ������ �� �������" << endl;
	cout << endl;
	cout << "1)�������� ��������"<<endl;
	cout << "2)�������� ����" << endl;
	cout << "3)�������� ���-��" << endl;
	cout << "4)�������� ����������� ����������� ��������" << endl;
	cout << "5)�������� ������������ ����������� ��������" << endl;

	int number;
	cin >> number;
	switch (number) 
	{
	case 1:
		{
		string newName;
		cout << "������� ����� ���" << endl;
		cin >> newName;
		editToy.setName(newName);
		break;
		}
	case 2:
		{
		double newCost;
		cout << "������� ����� ����" << endl;
		cin >> newCost;
		editToy.setCost(newCost);
		break;
		}
	case 3:
		{
		int newCount;
		cout << "������� ����� ����������" << endl;
		cin >> newCount;
		editToy.setCount(newCount);
		break;
		}
	case 4: 
		{
		int newMinAge;
		cout << "������� ����� ����������� ����������� �����������" << endl;
		cin >> newMinAge;
		editToy.setMinAgeRestrictions(newMinAge);
		break;
		}
	case 5:
		{
		int newMaxAge;
		cout << "������� ����� ������������ ����������� �����������" << endl;
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
