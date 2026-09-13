#include <stdio.h>
int main()
{
	int accuracy;
	int latency;
	int isapproved;
	printf("Enter Model Accuracy in %%  : \n");
	scanf("%d", &accuracy);
		if(accuracy < 0 || accuracy > 100)
	{
		printf("Invalid Data");
		return 0;
	}
		if(accuracy < 90)
	{
		printf("Accuracy too low\n");
		return 0;
	}
	
	printf("Enter Predicted Latency in milliseconds : \n");
	scanf("%d", &latency);
	if(latency > 100) 
	{
		printf("Latency is too high\n");
		return 0;
	}

	
	printf("Is Model Approved ? (1 = yes, 0 = No) \n");
	scanf("%d", &isapproved);
	
	if(isapproved == 0)
	{
		printf("Model Not Approved\n");
		return 0;
	}
	if(accuracy >= 90 && latency <= 100 && isapproved == 1)
	{
		printf("Model Is Ready To Be Displayed \n");
	}
	
}
