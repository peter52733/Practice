#include <stdio.h>
 
int main()
{
	float income,total = 0;
	int i;
	for(i = 0; i < 12; i++)
	{
		scanf("%f", &income);
		total += income;
	}
	printf("$%.2f",total/12);
	return 0;
 
}