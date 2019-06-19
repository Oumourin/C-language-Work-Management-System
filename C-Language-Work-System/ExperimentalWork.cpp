#include "ExperimentalWork.h"
#include<iostream>

void toString(ExperimentalWork experimentalWork)
{
	std::cout << "实验成绩单" << std::endl;
	std::cout << "科目" << "     " << "成绩" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << experimentalWork.experimentalContent[i] << "     " << experimentalWork.experimentalScore[i] << std::endl;
	}
}
