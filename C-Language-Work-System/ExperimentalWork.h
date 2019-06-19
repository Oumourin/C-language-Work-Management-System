#pragma once

#include<string>
#include<iostream>
#include<memory>
#include<algorithm>

#ifndef C_LANGUAGE_WORK_SYSTEM_EXPERIMENTALWORK_H
#define C_LANGUAGE_WORK_SYSTEM_EXPERIMENTALWORK_H

struct ExperimentalWork
{
	// ʵ�������
	unsigned int experimentalScore[10];
	// ʵ����Ŀ��
	std::string experimentalContent[10];
	// ������ʵ��γ���
	unsigned int takenCourse;
	// ���޶�ʵ�����
	unsigned int earnedScore;
	// ��ɱ��
	bool finishMark[10];

	ExperimentalWork()
	{
		std::fill_n(experimentalScore, 10, 0);
		memset(finishMark, false, 10);
		experimentalContent[0] = "˳��";
		experimentalContent[1] = "ѡ��";
		experimentalContent[2] = "ѭ��";
		experimentalContent[3] = "����";
		experimentalContent[4] = "ָ��";
		experimentalContent[5] = "����";
		experimentalContent[6] = "�ַ���";
		experimentalContent[7] = "�ṹ��";
		experimentalContent[8] = "�ļ�";
		experimentalContent[9] = "����Ԥ����";
		takenCourse = 0;
		earnedScore = 0;
	}
};

#endif // !C_LANGUAGE_WORK_SYSTEM_EXPERIMENTALWORK_H


void toString(ExperimentalWork experimentalWork);

// ����δ��ȫ�޶�����
void setter(ExperimentalWork* experimentalWork);

// �����޶���ɵķ���
void setAllClass(ExperimentalWork* experimentalWork);