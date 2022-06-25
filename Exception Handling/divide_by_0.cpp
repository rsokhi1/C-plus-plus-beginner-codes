#include<iostream>
using namespace std;
float division(int x,int y){
	if(y==0){
		throw "Attempted to divide by zero!";
	}
//	cout<<(x/y)<<endl;
	return (x/y);
}

int main(){
	int i = 25;
	int j = 2;
	float k = 0.0;
	try{
		k=division (i,j);
		cout<<k<<endl;
	}
	catch (const char* e){
		cerr<<e<<endl;
	}
	return 0;
}
