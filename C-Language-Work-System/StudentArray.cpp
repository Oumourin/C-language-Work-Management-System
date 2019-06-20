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

void printAllStudent()
{
	std::cout << "姓名" << "       " << "学号" << "       " << "顺序" << " " << "选择" << " " << "循环" << " " << "函数" << " " << "指针" << " " << "数组" << "字符串" << " " << "结构体" << " " << "文件" << " " << "编译预处理" <<" "<<"总成绩"<<" "<< "作业类别" << std::endl;
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		ElectronicWork* electronicWork = &studentArray.studentArray[i].electronicWork;
		ExperimentalWork* experimentalWork = &studentArray.studentArray[i].experimentalWork;
		std::cout << studentArray.studentArray[i].studentName << "       " << studentArray.studentArray[i].studentId;
		for (int j = 0; j < 10; j++)
		{
			if (electronicWork->finishMark[j])
			{
				std::cout << "√" << " ";
			}
			else
			{
				std::cout << "×" << " ";
			}
		}
		std::cout << electronicWork->earnedScore << " ";
		std::cout << "电子作业" << std::endl;
		std::cout << studentArray.studentArray[i].studentName << "       " << studentArray.studentArray[i].studentId;
		for (int j = 0; j < 10; j++)
		{
			if (experimentalWork->finishMark[j])
			{
				std::cout << "√" << " ";
			}
			else
			{
				std::cout << "×" << " ";
			}
		}
		std::cout << experimentalWork->earnedScore << " ";
		std::cout << "实验" << std::endl;
	}
}


