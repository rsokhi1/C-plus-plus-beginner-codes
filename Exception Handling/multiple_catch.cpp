#include<iostream>
using namespace std;
int main(){
	int a[10],b,n;
	cout<<"Enter total elements for array ";
	cin>>n;
	try{
		if(n>0 && n <=10) {
			cout<<"here"<<endl;
			throw n;
		}
		else{
			b = a[2];
		} 
	}
	catch(float f){
		cout<<"Limit crossed"<<endl;
	}
	catch (int e){
		cout<<"Maximum size of array can be 10"<<endl;
	}
	catch(...){
		cout<<"Something not right"<<endl;
	}
	return 0;
}
