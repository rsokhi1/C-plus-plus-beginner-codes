#include<iostream>
using namespace std;
int main(){
	int a[10],b,n;
	cout<<"Enter total elements for array: ";
	cin>>n;
	try{
		if(n==11)
		throw n;
		if(n==12)
		throw n;
		if(n>12)
		throw 's';
	}
	catch (float f)
	{
		cout<<"Limit crossed"<<endl;
	}
	catch (int e){
		cout<<"Maximum size of array can be 10"<<endl;
	}
	catch(...){
		cout<<"Something's not right"<<endl;
	}
	return 0;
}
