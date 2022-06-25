#include<iostream>
using namespace std;
int multiply(int i,int j){
	return i*j;
}

float multiply(float i,float j){
	return i*j;
}

float multiply(float i, float j, float k){
	return i*j*k;
}

int main(){
	int n1,n2;
	float f1,f2;
	cout<<"Enter integer values: ";
	cin>>n1>>n2;
	cout<<"Enter floating point values: ";
	cin>>f1>>f2;
	cout<<"Multiplication of first "<<multiply(n1,n2)<<endl;
	cout<<"Multiplication of second "<<multiply(f1,f2)<<endl;
	cout<<"Multiplication of third "<<multiply(f1,f2,n2)<<endl;
}
