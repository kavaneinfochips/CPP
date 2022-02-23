#include<iostream>
using namespace std;


void swapUsingPointer(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}


void swapusingReference(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){	

	int a = 2;
	int b = 5;
	
	cout<<"before swap: a:="<<a<<" b :="<<b<<endl;
	
	cout<<"swap variables using pointer"<<endl;
	swapUsingPointer(&a,&b);
	cout<<"After swap: a:="<<a<<" b :="<<b<<endl;;
	
	cout<<"swap using reference"<<endl;
	swapusingReference(a,b);
	cout<<"After swap: a:="<<a<<" b :="<<b<<endl;
	
	return 0;
}
