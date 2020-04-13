#include "SortToyScreen.h"



SortToyScreen::SortToyScreen()
{
}


SortToyScreen::~SortToyScreen()
{
}



void SortToyScreen::sortToys(vector<Toy> toys)
{

	cout << "Меню сортировки" << endl;
	cout << "1)по названию" << endl;
	cout << "2)по цене" << endl;
	cout << "3)по количеству" << endl;
	cout << "4)по минимальным возврастным ограничениям" << endl;
	cout << "5)по максимальным возврастным ограничениям" << endl;

	int numMenu;
	cin >> numMenu;


	switch (numMenu)
	{
	case 1: 
	{
		cout << "1)А-Я" << endl;
		cout << "2)Я-А" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getName() >= toys[j + 1].getName())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		case 2:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getName() <= toys[j + 1].getName())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		default:
			break;
		}

		break;
	}	
	case 2:
	{
		cout << "1)По возрастанию" << endl;
		cout << "2)По убыванию" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getCost() >= toys[j + 1].getCost())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		case 2:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getCost() <= toys[j + 1].getCost())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		default:
			break;
		}

		break;
	}
	case 3:
	{
		cout << "1)По возрастанию" << endl;
		cout << "2)По убыванию" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getCount() >= toys[j + 1].getCount())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		case 2:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getCount() <= toys[j + 1].getCount())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		default:
			break;
		}
		break;
	}
	case 4:
	{
		cout << "1)По возрастанию" << endl;
		cout << "2)По убыванию" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getMinAgeRestrictions() >= toys[j + 1].getMinAgeRestrictions())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		case 2:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getMinAgeRestrictions() <= toys[j + 1].getMinAgeRestrictions())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		default:
			break;
		}
		break;
	}
	case 5:
	{
		cout << "1)По возрастанию" << endl;
		cout << "2)По убыванию" << endl;
		int n;
		cin >> n;
		switch (n)
		{
		case 1:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getMaxAgeRestrictions() >= toys[j + 1].getMaxAgeRestrictions())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		case 2:
			for (int i = 0; i < toys.size() - 1; i++)
				for (int j = 0; j < toys.size() - i - 1; j++)
				{
					if (toys[j].getMaxAgeRestrictions() <= toys[j + 1].getMaxAgeRestrictions())
					{
						Toy s;
						s = toys[j];
						toys[j] = toys[j + 1];
						toys[j + 1] = s;
					}
				}
			break;
		default:
			break;
		}
		break;
	}
	default:
		break;
	}
	
	PrintToysScreen pts = PrintToysScreen();
	pts.print(toys);
}