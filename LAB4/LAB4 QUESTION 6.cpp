#include <stdio.h>
int main()
{
	int obstacle, person, battery;
	printf("Is an Obstacle detected ? ( 1 = yes ) , ( 0 = no) \n");
	scanf("%d", &obstacle);
	printf("Is a Person detected ? ( 1 = yes ) , ( 0 = no) \n");
	scanf("%d", &person);
	printf("Enter Your Battery in %% : \n");
	scanf("%d", &battery);
	if(obstacle == 1)
	{
			if(person == 1)
	{
		printf("Emergency Stop \n");
		return 0;
	}
	else{
		printf("Change Direction\n");
	}
	

	}
	if(obstacle == 0)
	{
		if(battery < 20)
		{
			printf("Return To Charging Station \n");
		
		return 0;}
	else {
		printf("Continue Moving\n");
		
	}
	}
}
