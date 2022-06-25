#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter any 2-digit number: ";
	cin>>a;
	if(a < 1 || a > 99){
		cout<<"The number is not positive or double digit";
	}
	else{
		cout<<"The number entered is "<<a;
	}
}
