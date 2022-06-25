#include<iostream>
using namespace std;
class Demo{
	double a,b;
	public:
		void get_data(){
			cout<<"Enter two number: ";
			cin>>a>>b;
		}
			operator double();
};
Demo::operator double(){
	return a+b;
}
int main(){
	Demo d;
	d.get_data();
	double k;
	k=d;
	cout<<k;
	return 0;
}
