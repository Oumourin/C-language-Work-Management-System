#include "StudentArray.h"
#include"FindData.h"
#include"UI.h"
#include"SecurityCheck.h"

using namespace std;

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
		std::cout << "��ӳɹ���" << std::endl;
	}
	else
	{
		std::cout << "ѧ��������󣡴���ʧ�ܣ�" << std::endl;
	}
}

void toString(Student stu)
{
	std::cout << "ѧ�ţ�" << stu.studentId << "������" << stu.studentName << "�༶�ţ�" << stu.classId << std::endl;
}

void enteringGrade()
{
	string studenId;
	cout << "����Ҫ�޸ĳɼ���ѧ��ѧ�ţ�" << endl;
	cin >> studenId;
	Student* stu;
	stu = findStudentById(studenId);
	if (stu != nullptr)
	{
		int getContentId;
		int getJobType;
		cout << "ѡ��Ҫ�޸ĵĿγ̣�";
		contentMenu();
		cin >> getContentId;
		if (checkContentId(getContentId))
		{
			jobTypeMenu();
			cout << "ѡ��Ҫ�޸ĵĳɼ����ͣ�";
			cin >> getJobType;
			if (checkJobType(getJobType))
			{
				int getScore=0;
				cout << "�����޸ĺ�ĳɼ���";
				cin >> getScore;
				if (getJobType == 1)
				{
					stu->electronicWork.score[getContentId] = getScore;
					stu->electronicWork.takenCourse++;
					stu->electronicWork.earnedScore += getScore;
					stu->electronicWork.finishMark[getContentId] = true;
					cout << "ѧ��" << "              " << "����" << "       " << "��Ŀ" << "       " << "�ɼ�" << endl;
					cout << stu->studentId << " " << stu->studentName << "       " << stu->electronicWork.workContent[getContentId] << "       " << getScore << endl;
				}
				if (getJobType == 0)
				{
					stu->experimentalWork.experimentalScore[getContentId] = getScore;
					stu->experimentalWork.takenCourse++;
					stu->experimentalWork.earnedScore += getScore;
					stu->experimentalWork.finishMark[getContentId] = true;
					cout << "ѧ��" << "              " << "����" << "       " << "��Ŀ" << "       " << "�ɼ�" << endl;
					cout << stu->studentId << " " << stu->studentName << "       " << stu->experimentalWork.experimentalContent[getContentId] << "       " << getScore << endl;
				}

			}
			else
			{
				cout << "����ѡ�����" << endl;
				return;
			}
		}
		else
		{
			cout << "�γ�ѡ�����" << endl;
			return;
		}
	}
	else
	{
		cout << "���޴���!" << endl;
		return;
	}
}

void setter()
{
	cout << "����Ҫ�޸���Ϣ��ѧ�ţ�";
	string getName = "", getId = "", getClassId = "";
	cin >> getId;
	Student *stu = findStudentById(getId);
	cout << "������(���޸�������'#')";
	cin >> getName;
	cout << "ѧ�ţ�(���޸�������'#')";
	cin >> getId;
	cout << "�༶�ţ�(���޸�������'#')";
	cin >> getClassId;
	if (getName != "#")
	{
		stu->studentName = getName;
	}
	if (getId != "#")
	{
		stu->studentId = getId;
	}
	if (getClassId != "#")
	{
		stu->classId = getClassId;
	}
	cout << "�޸���ϣ��޸ĺ���Ϣ���£�" << endl;
	toString(*stu);
}
