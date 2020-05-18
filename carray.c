#include<stdio.h>

int main(int argc, char const *argv[])
{
	int arr[100], n,i,j;
	
	printf("Enter number of elements in array\n");
	
	scanf("%d",&n);

	printf("Enter %d elements of array\n",n );
	for ( i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("And your array is::\n");
	for ( j = 0; j < n; ++j)
	{
		printf("%d\n",arr[j] );
	}
	return 0;
}
