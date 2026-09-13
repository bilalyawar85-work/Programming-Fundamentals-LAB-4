#include <stdio.h>
int main()
{
	int trecord, mrecord, drecord;
	int mpercentage, dpercentage;
	printf("Enter Total Records : \n");
	scanf("%d", &trecord);
	printf("Enter Missing Records : \n");
	scanf("%d", &mrecord);
	printf("Enter Duplicate Records : \n");
	scanf("%d", &drecord);
	if(trecord <= 0 || mrecord > trecord || drecord > trecord)
	{
		printf("Invalid Data set\n");
	}
	else {
		mpercentage = (mrecord * 100) / trecord;
	dpercentage = (drecord * 100) / trecord;
	}
 if(mpercentage > 30)
	{
		printf("Poor Quality Data Set \n");
	}
	else if(mpercentage <= 30 && dpercentage > 20)
	{
		printf("Data Set Requires Cleaning \n");
	}
	else
	{
		printf("Data Set Ready for Training\n");
	}
}
