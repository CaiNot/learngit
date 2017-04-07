#include <stdio.h>



void main()
{
	int n = 0;

	while (1)
	{
		scanf("%d", &n);

		if (n == 0)
			break;

		if (n < 3)
			printf("Error!\n");
		else
		{
			int f[50] = { 1, 1, 0 };
			for (int i = 0; i < n; ++i)
			{
				if (i > 1)
					f[i] = f[i - 2] + f[i - 1];

				printf("%10d", f[i]);

				if ((i + 1) % 8 == 0)
					printf("\n");

			}
			if (n % 8 != 0)
				printf("\n");

		}
		printf("\n");
	}
}