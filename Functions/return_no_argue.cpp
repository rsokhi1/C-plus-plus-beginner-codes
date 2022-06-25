#include<iostream>
using namespace std;

int square(){
	int a;
	cout<<"Enter any number: ";
	cin>>a;
	return a*a;
}


int main(){
	int sqr;
	sqr = square();
	cout<<"The square is: "<<sqr;
	return 0;	
}
