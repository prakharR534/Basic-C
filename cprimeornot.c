#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,c;

	printf("Enter a number\n");
	scanf("%d", &n);

	if (n==2)
		printf("Prime number\n");
	else
	{
		for (c = 2; c <= n-1 ; c++)
		{
			if (n%c == 0)
			  break;
		}
		if (c != n)

		{
			printf("Not prime\n");/* code */
		}
		else
			printf("Prime \n");

	}
	return 0;
}