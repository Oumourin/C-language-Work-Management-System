#pragma once

#include<string>
#include<memory.h>
#include<iostream>
#include<algorithm>

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
	// �Ѿ���óɼ�
	unsigned int earnedScore;
	// ��ҵ��ɱ��
	bool finishMark[10];
	// ȫ����ɱ��
	bool finishAllContent;

	ElectronicWork()
	{
		std::fill_n(score, 10, 0);
		memset(finishMark, false, 10);
		finishAllContent = false;
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


//  ��ӡ������ҵ�ɼ�����
void toString(ElectronicWork electronicWork);

// Setter����
void setter(ElectronicWork *electronicWork);

// ������ȫ�޶�
void setAllTakenClass(ElectronicWork *electronicWork);

// ����Ƿ������ҵ
void checkAllFinishWork(ElectronicWork* electronicWork);