#include <stdio.h>
int main()
{
	int data, price;
	float cost;
	float dcost;
	float fcost;
	printf("Enter Data Used in GB \n");
	scanf("%d", &data);
	printf("Enter Price per GB \n");
	scanf("%d", &price);
	cost = data * price;
	if(data < 50)
	{
		printf("Basic Cost is %.2f $ \n ", cost);
		dcost = 0;
		printf("Discounted Cost is %.2f $ \n", dcost );
	}
	else if(data >=50 && data <= 99)
	{
		dcost = (cost*5)/100;
		printf("Basic Cost is %.2f $ \n", cost);
		printf("Discounted Cost is %.2f $ \n", dcost);
	}
	else if(data >=100 && data <= 199)
	{
		dcost = (cost*10)/100;
		printf("Basic Cost is %.2f $ \n", cost);
		printf("Discounted Cost is %.2f $ \n", dcost);
	}
	else
	{
		printf("Basic Cost is %.2f $ \n", cost);
		dcost = (cost*15)/100;
		printf("Discounted Cost is %.2f $ \n", dcost);
	}
	fcost = cost - dcost;
	printf("Final Cost is %.2f", fcost);
	return 0;
}
