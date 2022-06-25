#include<iostream>
using namespace std;

class Base{
	int x;
	public:
		Base(){
			cout<<"Default constructor of base class\n";
		}
		Base(int a){
			x=a;
		}
};

class Derived:public Base{
	int y;
	public:
		Derived(){
			cout<<"Derived default constructor\n";
		}
		Derived(int i){
			cout<<"Derived parameterized constructor = "<<i<<endl;
		}
};

int main(){
	Derived d1;
	Derived d2(10);
	return 0;
}
