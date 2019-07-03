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

void setter(ExperimentalWork* experimentalWork)
{
	experimentalWork->experimentalScore[0] = 7;
	experimentalWork->experimentalScore[2] = 7;
	experimentalWork->experimentalScore[4] = 7;
	experimentalWork->experimentalScore[7] = 7;
	experimentalWork->experimentalScore[8] = 7;
	experimentalWork->finishMark[0] = true;
	experimentalWork->finishMark[2] = true;
	experimentalWork->finishMark[4] = true;
	experimentalWork->finishMark[7] = true;
	experimentalWork->finishMark[8] = true;
	experimentalWork->earnedScore = 35;
	experimentalWork->takenCourse = 5;
	experimentalWork->finishAllContent = false;
}

void setAllClass(ExperimentalWork* experimentalWork)
{
	for (int i = 0; i < 10; i++)
	{
		experimentalWork->experimentalScore[i] = 8;
		experimentalWork->finishMark[i] = true;
	}
	experimentalWork->takenCourse = 10;
	experimentalWork->earnedScore = 80;
	experimentalWork->finishAllContent = true;
}

void checkAllContentFinish(ExperimentalWork* experimentalWork)
{
	int finishFlag = 0;
	for (int i = 0; i < 10; i++)
	{
		if (experimentalWork->finishMark[i])
		{
			finishFlag++;
		}
		if (finishFlag == 10)
		{
			experimentalWork->finishAllContent = true;
		}
	}
}
