#include <stdio.h>
#include<stdio.h>

struct movie_list
{
	char movie_name[50];
	int year;

};

int main(int argc, char const *argv[])
{
	struct movie_list A;

	strcpy(A.movie_name, "Batman:The dark knight");
	A.year = 2009;

	printf("Name of your movie is : %s\n", A.movie_name );
	printf("year of release is: %d\n", A.year );
	return 0;
}