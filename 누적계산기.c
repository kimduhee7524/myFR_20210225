#include <stdio.h>
int result;
int add(int n1, int n2)
{
	result = n1 + n2;
	return  n1 + n2;
}

int min(int n1, int n2)
{
	result = n1 - n2;
	return  n1 - n2;
}

int mul(int n1, int n2)
{
	result = n1 * n2;
	return  n1 * n2;
}

int div(int n1, int n2)
{
	result = n1 / n2;
	return  n1 / n2;
}

int main()
{
	int X, n1, n2;
	printf("1. µ¡¼À 2. »¬¼À 3. °ö¼À 4. ³ª´°¼À, 5.Á¾·á\n");
	scanf_s("%d", &X);
	if (X == 1 || X == 2 || X == 3 || X == 4)
	{
		printf("Á¤¼ö¸¦ µÎ°³ ÀÔ·ÂÇÏ¼¼¿ä");
		scanf_s("%d %d", &n1, &n2);

		switch (X)
		{
		case 1:
			printf("%d\n", add(n1, n2));
			break;

		case 2:
			printf("%d\n", min(n1, n2));
			break;

		case 3:
			printf("%d\n", mul(n1, n2));
			break;

		case 4:
			printf("%d\n", div(n1, n2));
			break;
		}

		while (1)
		{
			printf("1. µ¡¼À 2. »¬¼À 3. °ö¼À 4. ³ª´°¼À, 5.Á¾·á\n");
			
			scanf_s("%d", &X);
			
			if (X == 5)
				break;
			printf("Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä");
			scanf_s("%d", &n2);
			if (X == 1 || X == 2 || X == 3 || X == 4)
			{
				switch (X)
				{
				case 1:
					printf("%d\n", add(result, n2));
					break;

				case 2:
					printf("%d\n", min(result, n2));
					break;

				case 3:
					printf("%d\n", mul(result, n2));
					break;

				case 4:
					printf("%d\n", div(result, n2));
					break;
				}
			}

		}

	}
	else
		printf("Á¾·á\n");
	return 0;
}