#include "StudentArray.h"

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
	}
	else
	{
		std::cout << "学号输入错误！创建失败！" << std::endl;
	}
}
