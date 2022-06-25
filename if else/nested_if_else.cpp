#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter the 1st value: ";
	cin>>a;
	cout<<"Enter the 2nd value: ";
	cin>>b;
	if(a != b){
		if(a>b){
			cout<<a<<" is greater than "<<b;
		}
		else{
			cout<<b<<" is greater than "<<a;
		}
	}
	else{
		cout<<"Both numbers are equal";
	}
	return 0;
}
