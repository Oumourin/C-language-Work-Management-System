#include "ExperimentalWork.h"
#include<iostream>

void toString(ExperimentalWork experimentalWork)
{
	std::cout << "ʵ��ɼ���" << std::endl;
	std::cout << "��Ŀ" << "     " << "�ɼ�" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << experimentalWork.experimentalContent[i] << "     " << experimentalWork.experimentalScore[i] << std::endl;
	}
}
