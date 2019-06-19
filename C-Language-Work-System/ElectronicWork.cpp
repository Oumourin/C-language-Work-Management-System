#include "ElectronicWork.h"
#include<iostream>

void toString(ElectronicWork electronicWork)
{
	std::cout << "电子作业成绩单" << std::endl;
	std::cout << "科目" << "     " << "成绩" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << electronicWork.workContent[i] << "     " << electronicWork.score[i] << std::endl;
	}
}
