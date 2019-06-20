#include"Statement.h"
#include<iostream>

using namespace std;

void contentMenu()
{
	cout << "=================================" << endl;
	cout << "==========课 程 目 录============" << endl;
	cout << "            0.顺序                 " << endl;
	cout << "            1.选择                 " << endl;
	cout << "            2.循环                                " << endl;
	cout << "            3.函数                                " << endl;
	cout << "            4.指针                                " << endl;
	cout << "            5.数组                                " << endl;
	cout << "            6.字符串                            " << endl;
	cout << "            7.结构体                            " << endl;
	cout << "            8.文件                                " << endl;
	cout << "            9.编译预处理                    " << endl;
	cout << "=================================" << endl;
}

void jobTypeMenu()
{
	cout << "=================================" << endl;
	cout << "==========类 型 选 择============" << endl;
	cout << "            0.实验                 " << endl;
	cout << "            1.作业                 " << endl;
	cout << "=================================" << endl;
}

void welcomUI()
{
	printf("====================================================================\n");
	printf("=====                       C语言作业管理系统                       =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                  =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     按任意键进入系统                     =====\n");
	printf("====================================================================\n");
}

void functionMenu()
{
	printf("====================================================================\n");
	printf("=====                      系  统  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、退出系统                       =====\n");
	printf("=====                      1、作业录入                       =====\n");
	printf("=====                      2、信息显示                       =====\n");
	printf("=====                      3、查询系统                   =====\n");
	printf("=====                      4、信息修改                         =====\n");
	printf("=====                      5、信息统计                       =====\n");
	printf("=====                      6、重置数据                  =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}

void statisticalMenu()
{
	printf("====================================================================\n");
	printf("=====                      统  计  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、退出系统                       =====\n");
	printf("=====                      1、班级统计                      =====\n");
	printf("=====                      2、学号统计                       =====\n");
	printf("====================================================================\n");
}


void choiceFunction()
{
	int getInput;
	cout << "输入需要的功能：";
	cin >> getInput;
	switch (getInput)
	{
	case 0:
		exit(0);
		break;
	case 1:
		enteringGrade();
		pauseFunction();
		break;
	case 2:
		printAllStudent();
		pauseFunction();
		break;
	case 3:
		findUI();
		choiceFind();
		pauseFunction();
		break;
	case 4:
		modifyUI();
		choiceModify();
		pauseFunction();
		break;
	case 5:
		statisticalUI();
		choiceStatistics();
		pauseFunction();
	case 6:
		initArray();
		break;
	default:
		cout << "输入错误，重新输入！" << endl;
		break;
	}
}

void findUI()
{
	printf("====================================================================\n");
	printf("=====                      统  计  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、返回上级                       =====\n");
	printf("=====                      1、学号查询                      =====\n");
	printf("=====                      2、课程查询                       =====\n");
	printf("=====                      3、姓名查询                       =====\n");
	printf("====================================================================\n");
}

void choiceFind()
{
	int getInput;
	cout << "选择需要的查询方式：" << endl;
	cin >> getInput;
	switch (getInput)
	{
	case 0:
		break;
	case 1:
		findImformationById();
		// pauseFunction();
		break;
	case 2:
		findImformationByContent();
		// pauseFunction();
		break;
	case 3:
		findImformationByName();
		// pauseFunction();
		break;
	default:
		cout << "输入错误！" << endl;
		break;
	}
}

void modifyUI()
{
	printf("====================================================================\n");
	printf("=====                      修  改  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、返回上级                       =====\n");
	printf("=====                      1、修改成绩                      =====\n");
	printf("=====                      2、修改信息                       =====\n");
	printf("====================================================================\n");
}

void choiceModify()
{
	int getInput;
	cout << "选择需要修改的信息类型：" << endl;
	cin >> getInput;
	switch (getInput)
	{
	case 0:
		break;
	case 1:
		enteringGrade();
		break;
	case 2:
		setter();
		break;
	default:
		cout << "输入错误！" << endl;
		break;
	}
}

void statisticalUI()
{
	printf("====================================================================\n");
	printf("=====                      修  改  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、返回上级                       =====\n");
	printf("=====                      1、班级统计                      =====\n");
	printf("=====                      2、姓名查询                       =====\n");
	printf("====================================================================\n");
}

void choiceStatistics()
{
	getfinalScore();
	int getInput;
	cout << "选择需要查询的信息类型：" << endl;
	cin >> getInput;
	switch (getInput)
	{
	case 0:
		break;
	case 1:
		getClassImformation();
		break;
	case 2:
		getImformationByStudent();
		break;
	default:
		cout << "输入错误！" << endl;
		break;
	}
}

void pauseFunction()
{
	cout << "请按任意键继续。。。。。" << endl;
	getchar();
	getchar();
}



