#include <stdio.h>
#include <string.h>
char graph[30][30];
int ans, W, H;
void move(int X, int Y);
int main()
{
	int i, row, col, flag;
	while(scanf("%d %d", &W, &H))
	{
		if(!W && !H) break;
		ans = 0
		for(i = 0; i < H; i++)
		{
			getchar();
			scanf("%s", graph[i]);
		}
		for(row = 0, flag = 0; row < H; row++)
		{
			for(col = 0; col < W; col++)
			{
				if(graph[row][col] == '@')
				{
					flag = 1;
					break;
				}
			}
			if(flag) break;
		}
		move(row, col);
		printf("%d\n", ans);
	}
	return 0;
}
void move(int X, int Y)
{
	if(X == H || X < 0 || Y < 0 || graph[X][Y] == '#' || graph[X][Y] == '\0') return;
	printf("ans = %d\n", ans);
	graph[X][Y] = '#';
	ans += 1;
	move(X + 1, Y);
	move(X - 1, Y);
	move(X, Y + 1);
	move(X, Y - 1);
}