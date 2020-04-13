
#include "StartAndEndProgram.h"
#include "windows.h"

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	StartAndEndProgram saep = StartAndEndProgram();
	saep.readFileAndStartProgram();
	saep.writeFile();
	system("pause");
	
}

