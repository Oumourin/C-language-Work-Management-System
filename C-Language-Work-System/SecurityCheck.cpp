#include "SecurityCheck.h"

bool checkContentId(int contentId)
{
	bool flag = false;
	contentId >= 0 ? (contentId < 10 ? flag = true : flag = false) : flag = false;
	return flag;
}

bool checkJobType(int jobType)
{
	bool flag;
	jobType >= 0 ? (jobType <= 1) ? flag = true : flag = false : flag = false;
	return flag;
}
