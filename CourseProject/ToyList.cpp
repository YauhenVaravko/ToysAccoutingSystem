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
	cout << "Игрушка добавлена" << endl;
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
		cout << "Такого номера нет в ассортименте" << endl;
		cout << "Пожалуйста, введите новый номер" << endl;
		number = dts.deteleToy();
	}
	cout << "Вы дейтвительно хотите удалить данную игрушку" << endl;
	cout << "1 - Да / 2 - Нет" << endl;
	int choice;
	cin >> choice;
	while ((choice != 1) and (choice!=2))
	{
		cout << "Ваши действия программен не ясны" << endl;
		cout << "Вы дейтвительно хотите удалить данную игрушку" << endl;
		cout << "1 - Да / 2 - Нет" << endl;
		cin >> choice;
	}
	if (choice == 1)
	{
		toys.erase(toys.begin() + number);
		cout << "Игрушка удалена" << endl;
	}
	else
	{
		return;
	}
}

void ToyList::editToy()
{
	
	cout << "введите номер игрушки, которую хотите изменить(чтобы отменить действие введите -1)" << endl;
	int number;
	cin >> number;
	if (number == -1) return;
	EditToyScreen ets = EditToyScreen();
	while (number >= toys.size())
	{
		cout << "Такого номера нет в ассортименте" << endl;
		cout << "Пожалуйста, введите новый номер" << endl;
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