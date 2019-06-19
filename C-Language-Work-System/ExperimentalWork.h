#pragma once

#include<string>
#include<iostream>
#include<memory>
#include<algorithm>

#ifndef C_LANGUAGE_WORK_SYSTEM_EXPERIMENTALWORK_H
#define C_LANGUAGE_WORK_SYSTEM_EXPERIMENTALWORK_H

struct ExperimentalWork
{
	// 实验分数表
	unsigned int experimentalScore[10];
	// 实验项目表
	std::string experimentalContent[10];
	// 已修完实验课程数
	unsigned int takenCourse;
	// 已修读实验分数
	unsigned int earnedScore;
	// 完成标记
	bool finishMark[10];

	ExperimentalWork()
	{
		std::fill_n(experimentalScore, 10, 0);
		memset(finishMark, false, 10);
		experimentalContent[0] = "顺序";
		experimentalContent[1] = "选择";
		experimentalContent[2] = "循环";
		experimentalContent[3] = "函数";
		experimentalContent[4] = "指针";
		experimentalContent[5] = "数组";
		experimentalContent[6] = "字符串";
		experimentalContent[7] = "结构体";
		experimentalContent[8] = "文件";
		experimentalContent[9] = "编译预处理";
		takenCourse = 0;
		earnedScore = 0;
	}
};

#endif // !C_LANGUAGE_WORK_SYSTEM_EXPERIMENTALWORK_H


void toString(ExperimentalWork experimentalWork);

// 设置未完全修读方法
void setter(ExperimentalWork* experimentalWork);

// 设置修读完成的方法
void setAllClass(ExperimentalWork* experimentalWork);