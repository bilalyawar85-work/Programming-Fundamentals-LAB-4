#include <stdio.h>
int main()
{
	int role; 
	printf("Enter Your Role \n (1 = Admin) \n (2 = Researcher) \n (3 = Student) \n");
	scanf("%d", &role);
	if( role != 1 && role != 2 && role !=3)
	{
		printf("Invalid Input");
		return 0;
		
		
	}
	int isactive;
	printf("Is your account active ? ( 1 = yes , 0 = no)\n");
	scanf("%d", &isactive);
	if(isactive == 0)
	{
		printf("NO ACCESS \n");
		return 0;
	}
	int security;
	printf("Enter Your Security Level \n");
	scanf("%d", &security);
	if ( role == 1)
	{
		if( security >=3)
		{
			printf("Access Granted as an Admin \n");
		}
		else
		{
			printf("Access Denied \n");
		}
		return 0;
		
	}
	if( role == 2)
	{
		if( security >= 2)
		{
			printf("Access Granted as a Researcher \n");
		}
		else
		{
			printf("Access Denied \n");
			
		}
		return 0;
	}
		if( role == 3)
	{
		if( security >= 1)
		{
			printf("Access Granted as a Student \n");
		}
		else
		{
			printf("Access Denied \n");
			
		}
		return 0;
	}
	
}
