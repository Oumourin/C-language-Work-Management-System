#include "StatisticalMethods.h"

extern StudentArray studentArray;
using namespace std;

void getfinalScore()
{
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		double getScore=0.0;
		//for (int j = 0; j < 10; j++)
		//{
		//	getScore += studentArray.studentArray[i].electronicWork.score[j];
		//	getScore += studentArray.studentArray[i].experimentalWork[j];
		//}
		getScore += (double)studentArray.studentArray[i].electronicWork.earnedScore;
		getScore += (double)studentArray.studentArray[i].experimentalWork.earnedScore;
		getScore = getScore / 2;
		studentArray.studentArray[i].finalScore = getScore;
	}
}

void getClassImformation()
{
	string getClassId;
	cout << "输入班级号：";
	cin >> getClassId;
	string::size_type position;
	bool unfinishWork[1000];
	memset(unfinishWork, false, 1000);
	int finishCount = 0;
	int unfinishCount = 0;
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		position = studentArray.studentArray[i].classId.find(getClassId);
		if (position != getClassId.npos)
		{
			checkAllFinishWork(&studentArray.studentArray[i].electronicWork);
			checkAllContentFinish(&studentArray.studentArray->experimentalWork);
			if (studentArray.studentArray[i].electronicWork.finishAllContent && studentArray.studentArray[i].experimentalWork.finishAllContent)
			{
				finishCount++;
			}
			else
			{
				unfinishCount++;
				unfinishWork[i] = true;
			}
		}
	}
	cout << getClassId << "共有：" << finishCount << "完成作业," << unfinishCount << "未完成作业！" << endl;
	cout << "未完成作业名单如下：" << endl;
	for (int i = 0; i < studentArray.arraySize; i++)
	{
		if (unfinishWork[i])
		{
			toString(studentArray.studentArray[i]);
		}
	}
}
