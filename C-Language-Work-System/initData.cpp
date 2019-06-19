#include "initData.h"
#include"StudentArray.h"
#include<string>

using namespace std;
extern StudentArray studentArray;

void initArray()
{
	addStudent(Student("1145141919", "TadokoroKouji", "810"));
	addStudent(Student("1234567890", "HatsuMiku", "39"));
	addStudent(Student("9876543210", "ToumaKazusa", "39"));
	addStudent(Student("5432106789", "KitaharaKazusa", "810"));
	setter(&studentArray.studentArray[0].electronicWork);
	setter(&studentArray.studentArray[0].experimentalWork);
	setAllClass(&studentArray.studentArray[1].experimentalWork);
	setAllClass(&studentArray.studentArray[2].experimentalWork);
	setAllClass(&studentArray.studentArray[3].experimentalWork);
	setAllTakenClass(&studentArray.studentArray[1].electronicWork);
	setAllTakenClass(&studentArray.studentArray[2].electronicWork);
	setAllTakenClass(&studentArray.studentArray[3].electronicWork);
}
