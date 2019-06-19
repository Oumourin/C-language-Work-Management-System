#include "StudentArray.h"
#include"FindData.h"
#include"UI.h"
#include"SecurityCheck.h"

using namespace std;

extern StudentArray studentArray;

bool checkStudenId(std::string studentId)
{
	if (studentId.length() == 10)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void initStudent()
{
	std::string studentId, studentName, classId;
	std::cout << "请依次输入学生学号，学生姓名，班级 以空格键隔开:";
	std::cin >> studentId >> studentName >> classId;
	if (checkStudenId(studentId))
	{
		addStudent(Student(studentId, studentName, classId));
		std::cout << "添加成功！" << std::endl;
	}
	else
	{
		std::cout << "学号输入错误！创建失败！" << std::endl;
	}
}

void toString(Student stu)
{
	std::cout << "学号：" << stu.studentId << "姓名：" << stu.studentName << "班级号：" << stu.classId << std::endl;
}

void enteringGrade()
{
	string studenId;
	cout << "输入要修改成绩的学生学号：" << endl;
	cin >> studenId;
	Student* stu;
	stu = findStudentById(studenId);
	if (stu != nullptr)
	{
		int getContentId;
		int getJobType;
		cout << "选择要修改的课程：";
		contentMenu();
		cin >> getContentId;
		if (checkContentId(getContentId))
		{
			jobTypeMenu();
			cout << "选择要修改的成绩类型：";
			cin >> getJobType;
			if (checkJobType(getJobType))
			{
				int getScore=0;
				cout << "输入修改后的成绩：";
				cin >> getScore;
				if (getJobType == 1)
				{
					stu->electronicWork.score[getContentId] = getScore;
					stu->electronicWork.takenCourse++;
					stu->electronicWork.earnedScore += getScore;
					stu->electronicWork.finishMark[getContentId] = true;
					cout << "学号" << "              " << "姓名" << "       " << "科目" << "       " << "成绩" << endl;
					cout << stu->studentId << " " << stu->studentName << "       " << stu->electronicWork.workContent[getContentId] << "       " << getScore << endl;
				}
				if (getJobType == 0)
				{
					stu->experimentalWork.experimentalScore[getContentId] = getScore;
					stu->experimentalWork.takenCourse++;
					stu->experimentalWork.earnedScore += getScore;
					stu->experimentalWork.finishMark[getContentId] = true;
					cout << "学号" << "              " << "姓名" << "       " << "科目" << "       " << "成绩" << endl;
					cout << stu->studentId << " " << stu->studentName << "       " << stu->experimentalWork.experimentalContent[getContentId] << "       " << getScore << endl;
				}

			}
			else
			{
				cout << "类型选择错误！" << endl;
				return;
			}
		}
		else
		{
			cout << "课程选择错误！" << endl;
			return;
		}
	}
	else
	{
		cout << "查无此人!" << endl;
		return;
	}
}

void setter()
{
	cout << "输入要修改信息的学号：";
	string getName = "", getId = "", getClassId = "";
	cin >> getId;
	Student *stu = findStudentById(getId);
	cout << "姓名：(不修改请输入'#')";
	cin >> getName;
	cout << "学号：(不修改请输入'#')";
	cin >> getId;
	cout << "班级号：(不修改请输入'#')";
	cin >> getClassId;
	if (getName != "#")
	{
		stu->studentName = getName;
	}
	if (getId != "#")
	{
		stu->studentId = getId;
	}
	if (getClassId != "#")
	{
		stu->classId = getClassId;
	}
	cout << "修改完毕！修改后信息如下：" << endl;
	toString(*stu);
}
