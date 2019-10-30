#include<stdio.h>

int main(){
	
	int l,c;
	while(c = getchar() != EOF){
		if(c == "\n"){
			l++;
		}
	}
	
	printf("%d",l);
	
}