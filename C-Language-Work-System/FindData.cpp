#include "FindData.h"

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
