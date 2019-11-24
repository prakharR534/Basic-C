#include<stdio.h>
#include<string.h>

typedef struct student{
	int id;
	char name[50];
	float per;
}status;

int main(){
	status record;
	record.id = 1;
	strcpy(record.name ,"Raj");
	record.per = 89;

	printf("Id is:\n",record.id);
	printf("Name is:\n",record.name);
	printf("percentage is:\n",record.per);
	return 0;
}