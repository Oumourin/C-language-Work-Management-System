#pragma once
#include"Student.h"
//  ѧ������ṹ��

#ifndef C_LANGUAGE_WORK_SYSTEM_STUDENT_ARRAY_H
#define C_LANGUAGE_WORK_SYSTEM_STUDENT_ARRAY_H

struct StudentArray
{
	Student studentArray[1000];
	int arraySize;

	// ��ʼ������
	StudentArray()
	{
		arraySize = 0;
	}
};

#endif // !C_LANGUAGE_WORK_SYSTEM_STUDENT_ARRAY_H

// ���ѧ����Ϣ����
void addStudent(Student stu);

// ��������ӡ����
void toString();

// �������ѧ��
void addStudent();

// ��ӡ����ѧ����ҵ������
void printAllStudent();

