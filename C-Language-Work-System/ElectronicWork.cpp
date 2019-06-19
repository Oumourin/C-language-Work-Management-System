#include "ElectronicWork.h"
#include<iostream>

void toString(ElectronicWork electronicWork)
{
	std::cout << "������ҵ�ɼ���" << std::endl;
	std::cout << "��Ŀ" << "     " << "�ɼ�" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << electronicWork.workContent[i] << "     " << electronicWork.score[i] << std::endl;
	}
}

void setAllTakenClass(ElectronicWork *electronicWork)
{
	for (int i = 0; i < 10; i++)
	{
		electronicWork->score[i] = 9;
		electronicWork->finishMark[i] = true;
	}
	electronicWork->earnedScore = 90;
	electronicWork->takenCourse = 10;
}

void setter(ElectronicWork *electronicWork)
{
	electronicWork->score[1] = 6;
	electronicWork->score[3] = 7;
	electronicWork->score[5] = 7;
	electronicWork->score[8] = 6;
	electronicWork->takenCourse = 4;
	electronicWork->earnedScore = 28;
	electronicWork->finishMark[1] = true;
	electronicWork->finishMark[3] = true;
	electronicWork->finishMark[5] = true;
	electronicWork->finishMark[8] = true;
}
