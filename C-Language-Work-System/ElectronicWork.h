#pragma once

#include<string>
#include<memory.h>

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
	//已经获得成绩
	unsigned int earnedScore;

	ElectronicWork()
	{
		memset(score, 0, 10);
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
