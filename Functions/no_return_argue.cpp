#include<iostream>
using namespace std;

void evenOdd(int a){
	if(a % 2 == 0){
		cout<<a<<" is an even number";
	}
	else if(a % 2 != 0){
		cout<<a<<" is an odd number";
	}
}

int main(){
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	evenOdd(a);
}
