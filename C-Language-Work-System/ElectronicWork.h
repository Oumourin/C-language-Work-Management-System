#pragma once

#include<string>
#include<memory.h>
#include<iostream>
#include<algorithm>

#ifndef C_LANGUAGE_WORK_SYSTEM_ELECTRONICWORK_H
#define C_LANGUAGE_WORK_SYSTEM_ELECTRONICWORK_H

struct ElectronicWork
{
	// 成绩表
	unsigned int score[10];
	// 课程表
	std::string workContent[10];
	// 已修读课程数量
	unsigned int takenCourse;
	// 已经获得成绩
	unsigned int earnedScore;
	// 作业完成标记
	bool finishMark[10];
	// 全部完成标记
	bool finishAllContent;

	ElectronicWork()
	{
		std::fill_n(score, 10, 0);
		memset(finishMark, false, 10);
		finishAllContent = false;
		workContent[0] = "顺序";
		workContent[1] = "选择";
		workContent[2] = "循环";
		workContent[3] = "函数";
		workContent[4] = "指针";
		workContent[5] = "数组";
		workContent[6] = "字符串";
		workContent[7] = "结构体";
		workContent[8] = "文件";
		workContent[9] = "编译预处理";
		takenCourse = 0;
		earnedScore = 0;
	}
};

#endif // !C_LANGUAGE_WORK_SYSTEM_ELECTRONICWORK_H


//  打印电子作业成绩方法
void toString(ElectronicWork electronicWork);

// Setter方法
void setter(ElectronicWork *electronicWork);

// 设置完全修读
void setAllTakenClass(ElectronicWork *electronicWork);

// 检查是否完成作业
void checkAllFinishWork(ElectronicWork* electronicWork);