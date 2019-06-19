#pragma once
#include"StudentArray.h"
#include"Student.h"
#include<iostream>

// 学号查找学生方法
Student* findStudentById(std::string studentId);

// 根据作业输出学生完成情况
void findImformationByContent();

// 根据姓名查找
void findImformationByName();