#include"Student.h"
#include"StudentArray.h"
#include"UI.h"

extern StudentArray studentArray;
int main(int args, char* argv[])
{
	contentMenu();
	addStudent();
	enteringGrade();
	toString();
	return 0;
}