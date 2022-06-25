#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a positive 2-digit number: ";
	cin>>a;
	if(a<1 || a > 99){
		cout<<"The value is not positive or double digit";
	}
}
