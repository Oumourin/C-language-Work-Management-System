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
