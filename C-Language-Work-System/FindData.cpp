#include "FindData.h"
#include"UI.h"
#include"Student.h"
#include"ElectronicWork.h"
#include"ExperimentalWork.h"

using namespace std;
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


void findImformationByContent()
{
	contentMenu();
	int getContentNum;
	cout << "ѡ��Ҫ��ѯ�Ŀγ̺ţ�";
	cin >> getContentNum;
	int getJobType;
	jobTypeMenu();
	cout << "ѡ��Ҫ��ѯ����ҵ����:";
	cin >> getJobType;
	if (getJobType == 1)
	{
		cout << "����" << "       " << "�Ƿ����" << endl;
		for (int i = 0; i < studentArray.arraySize; i++)
		{
			cout << studentArray.studentArray[i].studentName << "      ";
			if (studentArray.studentArray[i].electronicWork.finishMark[getContentNum])
			{
				cout << "����ɣ�" << endl;
			}
			else
			{
				cout << "δ���" << endl;
			}
		}
	}
	else
	{
		cout << "����" << "       " << "�Ƿ����" << endl;
		for (int i = 0; i < studentArray.arraySize; i++)
		{
			cout << studentArray.studentArray[i].studentName << "      ";
			if (studentArray.studentArray[i].experimentalWork.finishMark[getContentNum])
			{
				cout << "����ɣ�" << endl;
			}
			else
			{
				cout << "δ���" << endl;
			}
		}
	}
}

void findImformationByName()
{
	cout << "����Ҫ���ҵ�������" << endl;
	string getName;
	cin >> getName;
	string::size_type position;
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		position = studentArray.studentArray[i].studentName.find(getName);
		if (position != getName.npos)
		{
			std::cout << "����" << "       " << "ѧ��" << "       " << "˳��" << " " << "ѡ��" << " " << "ѭ��" << " " << "����" << " " << "ָ��" << " " << "����" << "�ַ���" << " " << "�ṹ��" << " " << "�ļ�" << " " << "����Ԥ����" << " "<<"�ɼ�"<<"" << "��ҵ���" << std::endl;
			ElectronicWork* electronicWork = &studentArray.studentArray[i].electronicWork;
			ExperimentalWork* experimentalWork = &studentArray.studentArray[i].experimentalWork;
			std::cout << studentArray.studentArray[i].studentName << "       " << studentArray.studentArray[i].studentId;
			for (int j = 0; j < 10; j++)
			{
				if (electronicWork->finishMark[j])
				{
					std::cout << "��" << " ";
				}
				else
				{
					std::cout << "��" << " ";
				}
			}
			std::cout << electronicWork->earnedScore << " ";
			std::cout << "������ҵ" << std::endl;
			std::cout << studentArray.studentArray[i].studentName << "       " << studentArray.studentArray[i].studentId;
			for (int j = 0; j < 10; j++)
			{
				if (experimentalWork->finishMark[j])
				{
					std::cout << "��" << " ";
				}
				else
				{
					std::cout << "��" << " ";
				}
			}
			std::cout << experimentalWork->earnedScore << " ";
			std::cout << "ʵ��" << std::endl;
			cout << "������ĩ�ɼ�Ϊ��" << studentArray.studentArray[i].finalScore << endl;
		}
	}
}

void findImformationById()
{
	string getId;
	cout << "����Ҫ���ҵ�ѧ�ţ�";
	cin >> getId;
	Student*stu= findStudentById(getId);
	if (stu != nullptr)
	{
		cout << "ѧ����Ϣ���£�" << endl;
		toString(*stu);
		toString(stu->electronicWork);
		toString(stu->experimentalWork);
	}
	else
	{
		cout << "δ�ҵ����ˣ�" << endl;
	}
}


