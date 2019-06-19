#pragma once

#include<string>
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
};

#endif // !C_Language_Work_System
