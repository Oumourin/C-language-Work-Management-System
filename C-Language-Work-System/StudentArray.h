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


void addStudent(Student stu);