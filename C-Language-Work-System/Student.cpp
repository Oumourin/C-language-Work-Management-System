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
	std::cout << "����������ѧ��ѧ�ţ�ѧ���������༶ �Կո������:";
	std::cin >> studentId >> studentName >> classId;
	if (checkStudenId(studentId))
	{
		addStudent(Student(studentId, studentName, classId));
	}
	else
	{
		std::cout << "ѧ��������󣡴���ʧ�ܣ�" << std::endl;
	}
}
