#include "FindData.h"
#include"UI.h"
#include"Student.h"
#include"ElectronicWork.h"
#include"ExperimentalWork.h"

using namespace std;
extern StudentArray studentArray;

Student* findStudentById(std::string studentId)
{
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		if (studentId == studentArray.studentArray[i].studentId)
		{
			return &studentArray.studentArray[i];
		}
	}
	return nullptr;
}


void findImformationByContent()
{
	contentMenu();
	int getContentNum;
	cout << "选择要查询的课程号：";
	cin >> getContentNum;
	int getJobType;
	jobTypeMenu();
	cout << "选择要查询的作业类型:";
	cin >> getJobType;
	if (getJobType == 1)
	{
		cout << "姓名" << "       " << "是否完成" << endl;
		for (int i = 0; i < studentArray.arraySize; i++)
		{
			cout << studentArray.studentArray[i].studentName << "      ";
			if (studentArray.studentArray[i].electronicWork.finishMark[getContentNum])
			{
				cout << "已完成！" << endl;
			}
			else
			{
				cout << "未完成" << endl;
			}
		}
	}
	else
	{
		cout << "姓名" << "       " << "是否完成" << endl;
		for (int i = 0; i < studentArray.arraySize; i++)
		{
			cout << studentArray.studentArray[i].studentName << "      ";
			if (studentArray.studentArray[i].experimentalWork.finishMark[getContentNum])
			{
				cout << "已完成！" << endl;
			}
			else
			{
				cout << "未完成" << endl;
			}
		}
	}
}

void findImformationByName()
{
	cout << "输入要查找的姓名：" << endl;
	string getName;
	cin >> getName;
	string::size_type position;
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		position = studentArray.studentArray[i].studentName.find(getName);
		if (position != getName.npos)
		{
			std::cout << "姓名" << "       " << "学号" << "       " << "顺序" << " " << "选择" << " " << "循环" << " " << "函数" << " " << "指针" << " " << "数组" << "字符串" << " " << "结构体" << " " << "文件" << " " << "编译预处理" << " "<<"成绩"<<"" << "作业类别" << std::endl;
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
			cout << "该生期末成绩为：" << studentArray.studentArray[i].finalScore << endl;
		}
	}
}

void findImformationById()
{
	string getId;
	cout << "输入要查找的学号：";
	cin >> getId;
	Student*stu= findStudentById(getId);
	if (stu != nullptr)
	{
		cout << "学生信息如下：" << endl;
		toString(*stu);
		toString(stu->electronicWork);
		toString(stu->experimentalWork);
	}
	else
	{
		cout << "未找到此人！" << endl;
	}
}


