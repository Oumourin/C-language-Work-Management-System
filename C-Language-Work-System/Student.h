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

	// �չ��캯��
	Student()
	{
		studentId = "";
		studentName = "";
		classId = "";
	}
};

#endif // !C_Language_Work_System

//  ѧ�ż��
bool checkStudenId(std::string studentId);


//  ����һ���µ�ѧ���ṹ��
void initStudent();

// ��ӡѧ����Ϣ����
void toString(Student stu);

// ¼��ɼ�����
void enteringGrade();