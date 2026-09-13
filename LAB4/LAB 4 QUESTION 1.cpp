#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter Number 1 : \n");
	scanf("%d", &a);
	printf("Enter Number 2 : \n");
	scanf("%d", &b);
	printf("Enter Number 3 : \n");
	scanf("%d", &c);
	if(a==b && b==c)
	{
		printf("All Numbers are EQUAL \n");
	}
	else if(a==b && a>c)
	{
		printf("Number 1 and Number 2 are same and greater than Number 3");
	}
		else if(b==c && b>a)
	{
		printf("Number 2 and Number 3 are same and greater than Number 1");
	}
		else if(a==c && a>b)
	{
		printf("Number 1 and Number 3 are same and greater than Number 2");
	}
		else if(a==b && a<c)
	{
		printf("Number 1 and Number 2 are same and smaller than Number 3");
	}	
		else if(a==b && a<c)
	{
		printf("Number 1 and Number 2 are same and smaller than Number 3");
	}
		else if(a==b && a<c)
	{
		printf("Number 1 and Number 2 are same and smaller than Number 3");
	}
	else if(a>b && b>c)
	{
		printf("Number 1 is the greatest");
}
    else if(b>c && b>a)
    {
    	printf("Number 2 is the greatest");
	}
	else if(c>a && c>a)
	{
		printf("Number 3 is the greatest");
	}
}
