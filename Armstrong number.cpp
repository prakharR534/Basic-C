#include<bits/stdc++.h>
using namespace std;




int order(int x){
	int n=0;
	while(x){
		n++;
		x = x/10;
	}
}

int power(int x, unsigned int y){
	if(y==0)
		return 1;
	if (y%2 ==0)
		return power(x,y/2)*power(x,y/2);
	return x*power(x,y/2)*power(x,y/2);
}

void isArmstrong(int x){
	int n = order(x);
	int temp = x , sum =0;

	while(temp){
		int r = temp %10;
		sum = sum + power(r,n);
		temp = temp/10;
	}

	if (sum == x){
	    cout<<"yes"<<endl;
	    break;
	}
	else
	cout<<"NO"<<endl;
}


int main(){
	int x ,n;
	while(x--){
	    cin>>n;
	isArmstrong(n);

}
}
