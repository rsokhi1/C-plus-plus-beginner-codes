#include<iostream>
using namespace std;

int bigger(int a,int b,int c){
	int val;
	if(a > b){
//		cout<<"hello";
		if(a > c){
			val = a;
		}
	}
	else if(b > c){
		if(b > a){
//			cout<<b<<" is the greatest";
			val = b;
		}
		
	}
	else if(c > a){
		if(c > b){
//			cout<<c<<" is the greatest";
			val = c;
		}
	}
	return val;
}

int main(){
	int a,b,c;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter 3rd number: ";
	cin>>c;
	int d;
	d = bigger(a,b,c);
	cout<<d<<" is the greatest";
}
