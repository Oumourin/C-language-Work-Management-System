#pragma once

#include<string>
#include<memory.h>

#ifndef C_LANGUAGE_WORK_SYSTEM_ELECTRONICWORK_H
#define C_LANGUAGE_WORK_SYSTEM_ELECTRONICWORK_H

struct ElectronicWork
{
	// �ɼ���
	unsigned int score[10];
	// �γ̱�
	std::string workContent[10];
	// ���޶��γ�����
	unsigned int takenCourse;
	//�Ѿ���óɼ�
	unsigned int earnedScore;

	ElectronicWork()
	{
		memset(score, 0, 10);
		workContent[0] = "˳��";
		workContent[1] = "ѡ��";
		workContent[2] = "ѭ��";
		workContent[3] = "����";
		workContent[4] = "ָ��";
		workContent[5] = "����";
		workContent[6] = "�ַ���";
		workContent[7] = "�ṹ��";
		workContent[8] = "�ļ�";
		workContent[9] = "����Ԥ����";
		takenCourse = 0;
		earnedScore = 0;
	}
};

#endif // !C_LANGUAGE_WORK_SYSTEM_ELECTRONICWORK_H
