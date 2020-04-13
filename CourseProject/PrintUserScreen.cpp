#include "PrintUserScreen.h"



PrintUserScreen::PrintUserScreen()
{
}


PrintUserScreen::~PrintUserScreen()
{
}

void PrintUserScreen::printUser(vector<User> users)
{
	
	cout << "________________________________________________________________________________" << endl;
	cout << "|�  |�����                        |������              |����                   |" << endl;
	cout << "|___|_____________________________|____________________|_______________________|" << endl;
	for (int i = 0; i < users.size(); i++)
	{
		string st;
		if (users[i].getIsAdmin())
			st = "�������������";
		else
			st = "������������";
		cout << "|" << i << setw(3) << "|" <<
			users[i].getLogin() << setw(30 - users[i].getLogin().length()) << "|" <<
			users[i].getPassword() << setw(21 - users[i].getPassword().length()) << "|"
			<< st << setw(24 - st.length()) << "|" << endl;
	}
	cout << "|______________________________________________________________________________|" << endl;
}