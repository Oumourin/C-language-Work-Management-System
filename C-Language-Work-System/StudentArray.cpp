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
	std::cout << "批量初始化学生信息" << std::endl;
	std::cout << "按任意键继续" << std::endl;
	while (true)
	{
		char flag;
		std::cout << "是否添加学生？Y/N" << std::endl;
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
				std::cout << "输入错误重新输入！" << std::endl;
			}
			getchar();
		}
	}
}


