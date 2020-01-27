#include <iostream>
#include <limits.h>
using namespace std;

int main(){
	int second_largest(int A[],int n);
	int A[] = {12,34,35,35,36,36};
	int n = sizeof(A)/sizeof(A[0]);
	second_largest(A,n);
}

int second_largest(int A[],int n){

	int i,first,second;
	if(n < 2)
	{
		cout<<"Invalid\n";
		return 0;
	}

	first = second = INT_MIN;
	for(i=0;i<n;i++){
		if(A[i] > first){
			second = first;
			first = A[i];
		}
		else if(A[i] > second && A[i] != first){
			second = A[i];
		}
	}

	if(second == INT_MIN)
		cout<<"NO second largest\n";
	else
		cout<<"The second largest element is -->  "<<second;

}
