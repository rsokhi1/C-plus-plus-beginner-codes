#include<iostream>
using namespace std;
template <class t1, class t2>
float multiply (t1 a,t2 b){
	return a*b;
}

int main(){
	int x;
	float i;
	cout<<"Enter two numbers - one (integer type) and other one (floating point): ";
	cin>>x>>i;
	cout<<"Multiplication "<<multiply(x,i)<<endl;
	return 0;
}
