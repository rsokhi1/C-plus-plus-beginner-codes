#include<iostream>
using namespace std;
class Positive{
	public:
		int a;
		void get_val(){
			cout<<"Enter a negative value: ";
			cin>>a;
		}
		void result(){
			cout<<"Positive value of a is "<<a<<endl;
		}
		void operator+(){
			a=-a;
		}
};

int main(){
	Positive p,p1;
	p.get_val();
	p1.get_val();
	+p;
	p1.operator+();
	p.result();
	p1.result();
	return 0;
}
