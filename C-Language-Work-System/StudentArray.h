#pragma once
#include"Student.h"
//  学生数组结构体

#ifndef C_LANGUAGE_WORK_SYSTEM_STUDENT_ARRAY_H
#define C_LANGUAGE_WORK_SYSTEM_STUDENT_ARRAY_H

struct StudentArray
{
	Student studentArray[1000];
	int arraySize;

	// 初始化方法
	StudentArray()
	{
		arraySize = 0;
	}
};

#endif // !C_LANGUAGE_WORK_SYSTEM_STUDENT_ARRAY_H

// 添加学生信息方法
void addStudent(Student stu);

// 添加数组打印方法
void toString();

// 批量添加学生
void addStudent();

// 打印所有学生作业完成情况
void printAllStudent();

