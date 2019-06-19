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
