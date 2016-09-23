#include <stdio.h>
#include <math.h>

int main()
{
	int N, i;
	double X, Y, year;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%lf %lf", &X, &Y);
		year = ceil(ceil((X*X+Y*Y))*3.14159/100.0);
		printf("Property %d: This property will begin eroding in year %d\n", i+1, (int)year);
	}
	printf("END OF OUTPUT");
	return 0;
}