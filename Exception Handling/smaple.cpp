#include<iostream>
using namespace std;
int main(){
	double top,bottom,result;
	cout<<"Enter two numbers: ";
	cin>>top>>bottom;
	try{
		if(bottom==0){
			throw bottom;
		}
		else{
			result = top/bottom;
			cout<<"Result = "<<result;
		}
	}
	catch (int e){
		cout<<"Dividing by "<<e<<" ! not possible "<<endl;
	}
	return 0;
}
