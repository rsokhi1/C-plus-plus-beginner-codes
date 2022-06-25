#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b){
	return a+b;
}

int main(){
	int x,y;
	float i,j;
	cout<<"Enter two numbers of integer type: ";
	cin>>x>>y;
	cout<<"Enter two numbers of floating point: ";
	cin>>i>>j;
	cout<<"Add = "<<sum(x,y)<<endl;
	cout<<"Add = "<<sum(i,j)<<endl;
}
