#include"Student.h"
#include"StudentArray.h"
#include"UI.h"
#include"initData.h"
#include"FindData.h"

extern StudentArray studentArray;
int main(int args, char* argv[])
{
	initArray();
	findImformationByName();
	findImformationByContent();
}