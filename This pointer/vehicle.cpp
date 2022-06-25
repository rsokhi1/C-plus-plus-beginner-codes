#include<iostream>
using namespace std;
class Vehicle{
	public:
		void apply_break(){
			cout<<"Vehicle Break"<<endl;
		}
		void apply_horn(){
			cout<<"Vehicle horns"<<endl;
		}
};

class Truck:public Vehicle{
	public:
		void apply_break(){
			cout<<"Truck break"<<endl;
		}
};

class Car:public Truck{
	public:
		void apply_horn(){
			cout<<"Car horn"<<endl;
		}
};

int main(){
	Vehicle v1, *pv;
	pv = &v1;
	pv->apply_break();
	pv->apply_horn();
	Car c1,*cr;
	pv = &c1;
	cr = &c1;
	cr->apply_break();
	cr->apply_horn();
	cr->apply_break();
	pv->apply_break();
	pv->apply_horn();
	Truck t1, *tr;
	pv = &t1;
	tr = &t1;
	tr->apply_break();
	tr->apply_break();
	pv->apply_break();
	pv->apply_horn();
	return 0;
}
