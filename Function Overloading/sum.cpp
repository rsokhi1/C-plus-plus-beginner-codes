#include<iostream>
using namespace std;

void sum(int a,int b){
	cout<<"The sum of 2 numbers is "<<a+b<<endl;
}

void sum(int a,int b,int c){
	cout<<"The sum of 3 numbers is "<<a+b+c<<"\n";
}

int main(){
	int a,b,c;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter 3rd number: ";
	cin>>c;
	sum(a,b);
	sum(a,b,c);
	return 0;
}
