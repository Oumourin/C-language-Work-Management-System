#include "StudentArray.h"
#include"Student.h"

extern StudentArray studentArray;

void addStudent(Student stu)
{
	studentArray.studentArray[studentArray.arraySize] = stu;
	studentArray.arraySize++;
}

void toString()
{
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		toString(studentArray.studentArray[i]);
	}
}

void addStudent()
{
	std::cout << "������ʼ��ѧ����Ϣ" << std::endl;
	std::cout << "�����������" << std::endl;
	while (true)
	{
		char flag;
		std::cout << "�Ƿ����ѧ����Y/N" << std::endl;
		flag = getchar();
		if (flag == 'y' || flag == 'Y')
		{
			initStudent();
			getchar();
		}
		else
		{
			if (flag == 'N' || flag == 'n')
			{
				break;
			}
			else
			{
				std::cout << "��������������룡" << std::endl;
			}
			getchar();
		}
	}
}


