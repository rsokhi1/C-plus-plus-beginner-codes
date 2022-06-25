#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter your marks: ";
	cin>>a;
	if(a > 90){
		cout<<"Your grade is A";
	}
	else if(a > 80){
		cout<<"Your grade is B";
	}
	else if (a > 70){
		cout<<"Your grade is C";
	}
	else if (a > 60){
		cout<<"Your grade is D";
	}
	else if (a >= 50){
		cout<<"Your grade is E";
	}
	else{
		cout<<"You failed the class";
	}
	return 0;
}
