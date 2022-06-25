#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Default constructor of base class\n";
		}
		~Base(){
			cout<<"Destructor of base class\n";
		}
};
class Derived: public Base{
	public:
		Derived(){
			cout<<"Derived class default constructor\n";
		}
		~Derived(){
			cout<<"Destructor of Derived class\n";
		}
};

int main(){
	Derived d1;
	return 0;
}
