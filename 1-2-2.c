#include <stdio.h>
int prime[10000];
int find(int* arr);

int main()
{
	int i, num, count, prime_num, sum, j;
	for(i = 0; i < 10000; i++) 
		prime[i] = 0;
	prime[0] = 2;
	prime_num = find(prime);
	
	scanf("%d", &num);
	while(num)
	{
		count = 0;
		for(i = 0; i < prime_num && prime[i] <= num; i++)
		{
			sum = 0;
			for(j = i; j < prime_num; j++)
			{
				sum += prime[j];
				if(sum == num)
				{
					count += 1;
					break;
				}
				else if(sum > num) break;
			}
		}

		printf("%d\n", count);
		scanf("%d", &num);
	}
	return 0;
}

int find(int* arr)
{
	int i, j, flag, count = 0;
	for(i = 3; i < 10000; i++)
	{
		for(j = 0, flag = 0; arr[j] < i && arr[j] != 0; j++)
		{
			if(i % arr[j] == 0)
			{
				flag = 1;
				break;
			}
		}
		if(!flag) 
		{
			count += 1;
			arr[j] = i;
		}
	}
	return count;
}