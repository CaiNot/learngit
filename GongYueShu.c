#include <stdio.h>

void main()
{
	int x = 0, y = 0;

	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		for (int i = x>y?x:y; i >0; --i)
		{
			if (x%i == 0 && y%i == 0)
			{
				printf("%d ", i);
				break;
			}
		}
		for (int i = x > y ? x : y;; i++)
		{
			if (i%x == 0 && i%y == 0)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
}