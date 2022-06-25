#include<iostream>
using namespace std;

void sum(int a,int b){
	cout<<"The sum is "<<a+b<<"\n";
}

void sum(double a,double b){
	cout<<"The sum is "<<a+b<<"\n";
}

int main(){
//	int a,b;
////	cout<<"Enter 1 for integer and 2 for double type: "
////	cin<<sel;
//	cout<<"Enter 1st number: ";
//	cin>>a;
//	cout<<"Enter 2nd number: ";
//	cin>>b;
	sum(10,20);
	sum(2.2,7.9);
	return 0;
}
