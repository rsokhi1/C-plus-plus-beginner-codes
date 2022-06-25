#include<iostream>
using namespace std;
class Positive{
	public:
		int a;
		void get_input(){
			cout<<"Enter a negative Value: ";
			cin>>a;
		}
		void result(){
			cout<<"Positive value of a is "<<a<<endl;
		}
};

Positive operator+(Positive p){
	p.a = -p.a;
}

int main(){
	Positive p,p1;
	p.get_input();
	p1=operator+(p);
	p1.result();
	p.get_input();
	p1=+p;
	p1.result();
	return 0;
}
