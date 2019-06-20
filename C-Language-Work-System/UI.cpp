#include"Statement.h"
#include<iostream>

using namespace std;

void contentMenu()
{
	cout << "=================================" << endl;
	cout << "==========�� �� Ŀ ¼============" << endl;
	cout << "            0.˳��                 " << endl;
	cout << "            1.ѡ��                 " << endl;
	cout << "            2.ѭ��                                " << endl;
	cout << "            3.����                                " << endl;
	cout << "            4.ָ��                                " << endl;
	cout << "            5.����                                " << endl;
	cout << "            6.�ַ���                            " << endl;
	cout << "            7.�ṹ��                            " << endl;
	cout << "            8.�ļ�                                " << endl;
	cout << "            9.����Ԥ����                    " << endl;
	cout << "=================================" << endl;
}

void jobTypeMenu()
{
	cout << "=================================" << endl;
	cout << "==========�� �� ѡ ��============" << endl;
	cout << "            0.ʵ��                 " << endl;
	cout << "            1.��ҵ                 " << endl;
	cout << "=================================" << endl;
}

void welcomUI()
{
	printf("====================================================================\n");
	printf("=====                       C������ҵ����ϵͳ                       =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                  =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     �����������ϵͳ                     =====\n");
	printf("====================================================================\n");
}

void functionMenu()
{
	printf("====================================================================\n");
	printf("=====                      ϵ  ͳ  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0���˳�ϵͳ                       =====\n");
	printf("=====                      1����ҵ¼��                       =====\n");
	printf("=====                      2����Ϣ��ʾ                       =====\n");
	printf("=====                      3����ѯϵͳ                   =====\n");
	printf("=====                      4����Ϣ�޸�                         =====\n");
	printf("=====                      5����Ϣͳ��                       =====\n");
	printf("=====                      6����������                  =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}

void statisticalMenu()
{
	printf("====================================================================\n");
	printf("=====                      ͳ  ��  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0���˳�ϵͳ                       =====\n");
	printf("=====                      1���༶ͳ��                      =====\n");
	printf("=====                      2��ѧ��ͳ��                       =====\n");
	printf("====================================================================\n");
}

void choiceFunction()
{
	int getInput;
	cout << "������Ҫ�Ĺ��ܣ�";
	cin >> getInput;
	switch (getInput)
	{
	case 0:
		exit(0);
		break;
	case 1:
		enteringGrade();
		break;
	case 2:
		printAllStudent();
		break;
	case 3:
		findUI();
		choiceFind();
	case 4:
		modifyUI();
		choiceModify();
		break;
	case 5:

	default:
		break;
	}
}

void findUI()
{
	printf("====================================================================\n");
	printf("=====                      ͳ  ��  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0�������ϼ�                       =====\n");
	printf("=====                      1��ѧ�Ų�ѯ                      =====\n");
	printf("=====                      2���γ̲�ѯ                       =====\n");
	printf("=====                      3��������ѯ                       =====\n");
	printf("====================================================================\n");
}

void choiceFind()
{
	int getInput;
	cout << "ѡ����Ҫ�Ĳ�ѯ��ʽ��" << endl;
	cin >> getInput;
	switch (getInput)
	{
	case 0:
		break;
	case 1:
		findImformationById();
		break;
	case 2:
		findImformationByContent();
		break;
	case 3:
		findImformationByName();
		break;
	default:
		cout << "�������" << endl;
		break;
	}
}

void modifyUI()
{
	printf("====================================================================\n");
	printf("=====                      ��  ��  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0�������ϼ�                       =====\n");
	printf("=====                      1���޸ĳɼ�                      =====\n");
	printf("=====                      2���޸���Ϣ                       =====\n");
	printf("====================================================================\n");
}

void choiceModify()
{
	int getInput;
	cout << "ѡ����Ҫ�޸ĵ���Ϣ���ͣ�" << endl;
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
		cout << "�������" << endl;
		break;
	}
}



