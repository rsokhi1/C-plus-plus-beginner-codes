#include<iostream>
using namespace std;
class A{
	int item,price;
	public:
		void get_val(){
			cout<<"Enter quantity for item and their price: ";
			cin>>item>>price;
		}
		int value(){
			return item*price;
		}
};

class B{
	int value;
	public:
		B(A a){
			value = a.value();
		}
		void display(){
			cout<<"Total stock available : "<<value;
		}
};

int main(){
	A a1;
	a1.get_val();
	B b1 = a1;
	b1.display();
	return 0;
}
