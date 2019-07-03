#include"Statement.h"

extern StudentArray studentArray;

int main(int args, char* argv[])
{
	initArray();
	welcomUI();
	getchar();
	system("cls");
	while (true)
	{
		functionMenu();
		choiceFunction();
		system("cls");
	}
}