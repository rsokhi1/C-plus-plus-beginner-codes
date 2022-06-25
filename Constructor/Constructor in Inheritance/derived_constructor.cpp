#include<iostream>
using namespace std;
class Base{
	int x;
	public:
		Base(int a){
			x=a;
		}
};

class Derived: public Base{
	int y;
	public:
		Derived(int i): Base(i){
			cout<<"derived parameterized constructor\n";
		}
};

int main(){
	Derived d2(10);
}
