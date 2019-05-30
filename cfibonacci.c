#include<stdio.h>

int main(int argc, char const *argv[])
{
	int n , f=0, s=1, next,c;

	printf("Enter number of terms\n");
	scanf("%d",&n);

	printf("Terms of series are\n");


	for (c=0; c<n; c++)
	{
		if (c <= 1)
		{
			next = c;
		}
		else
		{
			next = f + s;
			f = s;
			s = next;
		}
		printf("%d\n", next );
	}
	return 0;
}