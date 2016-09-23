#include <stdio.h>
int main()
{
	int num, array[100], i, count, tmp, j, ans;
	while(1)
	{
		for(i = 0; i < 100; i++) array[i] = 0;
		count = 1;
		ans = 0;
		scanf("%d", &num);
		while(num && num != -1)
		{
			count += 1;
			array[num] = 1;
			scanf("%d", &num);
		}
		if(num == -1) break;
		for(i = 99, tmp = 0; i > 0 && tmp < count ; i--)
		{
			if(array[i] !=1) continue;
			for(j = i-1; j > 0; j--)
			{
				if(array[j] != 1) continue;
				if(i%j == 0 && i/j ==2) ans += 1;
			}
			tmp += 1;
		}
		printf("%d\n", ans);
	}
	return 0;
	
}