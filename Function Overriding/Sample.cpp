#include<iostream>
using namespace std;
class Base{
	public:
		void show(){
			cout<<"Base class method\n";
		}
};
class Derived: public Base{
	public:
		void show(){
			cout<<"Sub class Method\n";
		}
};

int main(){
	Derived d;
	d.show();
	return 0;
	
}
