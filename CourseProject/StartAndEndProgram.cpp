#include "StartAndEndProgram.h"



StartAndEndProgram::StartAndEndProgram()
{
}


StartAndEndProgram::~StartAndEndProgram()
{
}

StartAndEndProgram::StartAndEndProgram(vector<Toy>& vec1, vector<User>& vec2)
{
	vec_toy = vec1;
	vec_user = vec2;
}

void StartAndEndProgram::readFileAndStartProgram()
{
	
	cout << "Курсовой проект по дисциплине ООП" << endl;
	cout << "Система ассортимента магазина игрушек" << endl;
	cout << "Выполнил студент Группы СП741" << endl;
	cout << "Варавко Евгений Павлович " << endl;
	cout << "Проверила : Труханович Татьяна Леонидовна" << endl;
	//cout << "Выполнил Лакизо Павел     гр СТ-741" << endl;
	cout << endl;
	cout << endl;
	setlocale(LC_ALL, "rus"); 
	ifstream fin_user("users.txt");
	if (!fin_user.is_open()) 
		cout << "Файл не может быть открыт!\n";
	else
	{	
		int size_vec_user;
		string str;
		getline(fin_user, str);
		size_vec_user = atoi(str.c_str());
		for (int i = 0; i < size_vec_user; i++)
		{
			User userok = User();
			getline(fin_user, str);
			userok.setLogin(str);
			getline(fin_user, str);
			userok.setPassword(str);
			getline(fin_user, str);
			if (atoi(str.c_str()) == 1)
			{
				userok.setIsAdmin(true);
			}
			else
			{
				userok.setIsAdmin(false);
			}
			vec_user.push_back(userok);
			
		}
	}
	fin_user.close();

	ifstream fin_toy("toys.txt");
	if (!fin_toy.is_open())
		cout << "Файл не может быть открыт!\n";
	else
	{
		int size_vec_toys;
		string str1;
		getline(fin_toy, str1);
		size_vec_toys = atoi(str1.c_str());
		for (int i = 0; i < size_vec_toys; i++)
		{
			Toy toyka = Toy();
			getline(fin_toy, str1, '\n');
			toyka.setName(str1);
			double cost_t;
			getline(fin_toy, str1, '\n');
			cost_t = atof(str1.c_str());
			toyka.setCost(cost_t);
			int iner;
			getline(fin_toy, str1, '\n');
			iner = atoi(str1.c_str());
			toyka.setCount(iner);
			getline(fin_toy, str1, '\n');
			iner = atoi(str1.c_str());
			toyka.setMinAgeRestrictions(iner);
			getline(fin_toy, str1, '\n');
			iner = atoi(str1.c_str());
			toyka.setMaxAgeRestrictions(iner);
			vec_toy.push_back(toyka);
		}
	}
	fin_toy.close();
	ToyList tl = ToyList(vec_toy);
	UserList ur = UserList(vec_user);
	AuthenticationAndMenu aam = AuthenticationAndMenu(tl,ur);
	aam.autentication();
	vec_toy = aam.getToyList().getList();
	vec_user = aam.getUserList().getUserList();
}

void StartAndEndProgram::writeFile()
{	
	ofstream fout_users("users.txt");
	ofstream fout_toys("toys.txt");
	fout_users << vec_user.size() << '\n';
	fout_toys << vec_toy.size() << '\n';
	for (int i = 0; i < vec_toy.size();i++)
	{
		fout_toys << vec_toy[i].getName() << '\n';
		fout_toys << to_string(vec_toy[i].getCost()) << '\n';
		fout_toys << vec_toy[i].getCount() << '\n';
		fout_toys << vec_toy[i].getMinAgeRestrictions()<< '\n';
		fout_toys << vec_toy[i].getMaxAgeRestrictions() << '\n';
	}
	for (int i = 0; i < vec_user.size(); i++)
	{
		fout_users << vec_user[i].getLogin()<< '\n';
		fout_users << vec_user[i].getPassword()<<'\n';
		fout_users << vec_user[i].getIsAdmin()<<'\n';
	}
	fout_users.close();
	fout_toys.close();
}


vector<Toy>& StartAndEndProgram::getVectorToy()
{
	return vec_toy;
}

vector<User>& StartAndEndProgram::getVectorUser()
{
	return vec_user;
}