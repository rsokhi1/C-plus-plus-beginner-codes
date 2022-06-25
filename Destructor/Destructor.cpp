#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Deafult constructor of base class\n";
		}
		~Base(){
			cout<<"Destructor of base class\n";
		}
};

class Derived: public Base
{
	public:
		Derived(){
			cout<<"Derived class default constructor\n";
		}	
		~Derived(){
			cout<<"Destructor of derived class\n";
		}
};

int main(){
	Derived d1;
	return 0;
}
