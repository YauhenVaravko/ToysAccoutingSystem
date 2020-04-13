#include "ToyList.h"





ToyList::ToyList()
{
}

ToyList::ToyList(vector<Toy> toys_)
{
	toys = toys_;
}

ToyList::~ToyList()
{
}
void ToyList::addToyInList()
{
	AddToyScreen ats = AddToyScreen();
	Toy newToy = ats.addToy();
	toys.push_back(newToy);
	cout << "������� ���������" << endl;
}

void ToyList::printAllToys()
{
	
	PrintToysScreen prs = PrintToysScreen();
	prs.print(toys);

}

void ToyList ::deleteToy()
{
	
	deleteToyScreen dts = deleteToyScreen();
	int number;
	number = dts.deteleToy();
	while (number >= toys.size())
	{
		cout << "������ ������ ��� � ������������" << endl;
		cout << "����������, ������� ����� �����" << endl;
		number = dts.deteleToy();
	}
	cout << "�� ������������ ������ ������� ������ �������" << endl;
	cout << "1 - �� / 2 - ���" << endl;
	int choice;
	cin >> choice;
	while ((choice != 1) and (choice!=2))
	{
		cout << "���� �������� ���������� �� ����" << endl;
		cout << "�� ������������ ������ ������� ������ �������" << endl;
		cout << "1 - �� / 2 - ���" << endl;
		cin >> choice;
	}
	if (choice == 1)
	{
		toys.erase(toys.begin() + number);
		cout << "������� �������" << endl;
	}
	else
	{
		return;
	}
}

void ToyList::editToy()
{
	
	cout << "������� ����� �������, ������� ������ ��������(����� �������� �������� ������� -1)" << endl;
	int number;
	cin >> number;
	if (number == -1) return;
	EditToyScreen ets = EditToyScreen();
	while (number >= toys.size())
	{
		cout << "������ ������ ��� � ������������" << endl;
		cout << "����������, ������� ����� �����" << endl;
		cin >> number;
	}
	ets.editOneToy(toys[number]);
	
}

vector<Toy> ToyList::getList()
{
	return toys;
}

void ToyList::individualTask()
{

	IndividualTaskScreen its = IndividualTaskScreen();
	its.runIndividualTask(toys);
}

void ToyList::sortToy() 
{
	
	SortToyScreen sts = SortToyScreen();
	sts.sortToys(toys);
}

void ToyList::findToy()
{
	
	FindToysScreen fts = FindToysScreen();
	fts.findToys(toys);
}