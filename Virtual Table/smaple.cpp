#include<iostream>
using namespace std;
class Vehicle{
	public:
		virtual void apply_break(){
			cout<<"Vehicle Break"<<endl;
		}
		virtual void apply_horn(){
			cout<<"Vehicle Horns"<<endl;
		}
};

class Truck: public Vehicle{
	public:
		void apply_break(){
			cout<<"Truck Break"<<endl;
		}
};

class Car: public Vehicle{
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
	Car c1;
	pv=&c1;
	pv->apply_break();
	pv->apply_horn();
	Truck t1;
	pv = &t1;
	pv->apply_break();
	pv->apply_horn();
	return 0;
}
