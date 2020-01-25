#include<iostream>
#include<thread>
using namespace std;

void foo(int z){
	for(int i=0;i<z;i++)
		cout<<"thread using function pointer as callable\n";
}

class thread_obj
{
public:
	void operator()(int x){
		for(int i=0;i<x;i++)
			cout<<"thread using function object as callable\n"<<i<<endl;

	}

};


int main(){
	cout<<"thread 1 and 2 " " operating independently\n";

    //thread launched using function pointer
	thread t1(foo,3);

	//thread launched using function object
	thread t2(thread_obj(),4);

	t2.join();
	t1.join();

	return 0;


}
