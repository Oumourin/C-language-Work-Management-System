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

void printAllStudent()
{
	std::cout << "����" << "       " << "ѧ��" << "       " << "˳��" << " " << "ѡ��" << " " << "ѭ��" << " " << "����" << " " << "ָ��" << " " << "����" << "�ַ���" << " " << "�ṹ��" << " " << "�ļ�" << " " << "����Ԥ����" <<" "<<"�ܳɼ�"<<" "<< "��ҵ���" << std::endl;
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		ElectronicWork* electronicWork = &studentArray.studentArray[i].electronicWork;
		ExperimentalWork* experimentalWork = &studentArray.studentArray[i].experimentalWork;
		std::cout << studentArray.studentArray[i].studentName << "       " << studentArray.studentArray[i].studentId;
		for (int j = 0; j < 10; j++)
		{
			if (electronicWork->finishMark[j])
			{
				std::cout << "��" << " ";
			}
			else
			{
				std::cout << "��" << " ";
			}
		}
		std::cout << electronicWork->earnedScore << " ";
		std::cout << "������ҵ" << std::endl;
		std::cout << studentArray.studentArray[i].studentName << "       " << studentArray.studentArray[i].studentId;
		for (int j = 0; j < 10; j++)
		{
			if (experimentalWork->finishMark[j])
			{
				std::cout << "��" << " ";
			}
			else
			{
				std::cout << "��" << " ";
			}
		}
		std::cout << experimentalWork->earnedScore << " ";
		std::cout << "ʵ��" << std::endl;
	}
}


