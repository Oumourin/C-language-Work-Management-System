# C-language-Work-Management-System
C语言作业平时管理系统

##  结构体类型

###  Student结构体

成员：

1.  学生证号
2.  学生名称
3.  学生班级号
4.  最终成绩
5.  实验作业结构体
6.  电子作业结构体

### ElectronicWork结构体

成员：

1.  成绩表
2.  课程表
3.  已经修读的课程数量
4.  已经获得的成绩
5.  作业是否完成
6.  结课标记

###  ExperimentalWork结构体

成员：

1.  成绩表
2.  实验项目表
3.  已经修读的课程数
4. 已经获得的分数
5.  作业完成标记
6.  结课标记

###  StudentArray结构体

成员：

1.  学生数组
2.  数组长度

##  函数

###  学生处理相关函数

定义在Student.h头文件中

####  学号合法性检查函数

函数定义：

```C++
bool checkStudenId(std::string studentId);
```

函数功能：

实现对于输入学号合法性的检查

####  创建学生结构体函数

函数定义：

```c++
void initStudent();
```

函数功能：

新建一个学生结构体，并加入结构体数组中

####  学生信息打印方法

函数定义：

```c++
void toString(Student stu);
```

函数功能：

实现对于一个学生结构体的打印

####  登记成绩方法

函数定义：

```c++
void enteringGrade();
```

函数功能：

实现依据学号对于成绩的录入

####  修改学生信息方法

函数定义：

```c++
void setter();
```

函数功能：

实现对于学生信息的修改

###  电子作业处理相关函数

####  打印电子作业函数

函数定义：

```c++
void toString(ElectronicWork electronicWork);
```

函数功能：

实现对于电子作业结构体的打印

####  设置电子作业方法

函数定义：

```c++
void setter(ElectronicWork *electronicWork);
```

函数功能：

实现对于电子作业信息的修改

####  设置结业标记函数

函数定义：

```c++
void setAllTakenClass(ElectronicWork *electronicWork);
```

函数功能：

用于初始化结构体，设置指针所指向结构体为全部修完状态

####  检查是否修完

函数定义：

```c++
void checkAllFinishWork(ElectronicWork* electronicWork);
```

函数功能：

检查是否修完，修完置标志位为true

###  实验处理相关函数

####  打印实验作业结构体

函数定义：

```c++
void toString(ExperimentalWork experimentalWork);
```

函数功能：

打印实验信息

####  设置初始化状态函数

函数定义：

```c++
void setter(ExperimentalWork* experimentalWork);
void setAllClass(ExperimentalWork* experimentalWork);
```

函数定义：

设置指针所指向的结构体为修满/修满状态

####  检查是否修完函数

函数定义：

```c++
void checkAllContentFinish(ExperimentalWork* experimentalWork);
```

函数定义：

检查是否修完所有课程，修完设置为true



