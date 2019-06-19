#include "StudentArray.h"

extern StudentArray studentArray;

void addStudent(Student stu)
{
	studentArray.studentArray[studentArray.arraySize] = stu;
	studentArray.arraySize++;
}
