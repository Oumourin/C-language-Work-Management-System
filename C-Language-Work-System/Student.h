#pragma once

#include<string>
#include<iostream>
#include"ElectronicWork.h"
#include"ExperimentalWork.h"

#ifndef C_Language_Work_System_H
#define C_Language_Work_System_H

struct Student
{
	std::string studentId;
	std::string studentName;
	std::string classId;
	ExperimentalWork experimentalWork;
	ElectronicWork electronicWork;

	Student(std::string _studentId, std::string _studentName, std::string _classId)
	{
		studentId = _studentId;
		studentName = _studentName;
		classId = _classId;
	}

	// 空构造函数
	Student()
	{
		studentId = "";
		studentName = "";
		classId = "";
	}
};

#endif // !C_Language_Work_System

//  学号检查
bool checkStudenId(std::string studentId);


//  创建一个新的学生结构体
void initStudent();

// 打印学生信息方法
void toString(Student stu);

// 录入成绩方法
void enteringGrade();