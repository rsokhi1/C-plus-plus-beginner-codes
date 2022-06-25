#include<iostream>
using namespace std;
class Vehicle{
	private:
		void start(){
			cout<<"Start the engine\n";
		}
	protected:
		void drive(){
			cout<<"Drive \n";
			start();
		}
	public:
		void horn(){
			cout<<"Horn please!\n";
		}
};

class Bike:private Vehicle{
	public:
		void wheels(){
			cout<<"Two wheeler vehicle\n";
			horn();
			drive();
//			start(); // It is private so called it in the drive function.
		}
};

int main(){
	Bike b1;
	b1.wheels();
//	b1.horn();
//	b1.drive();
//	b1.start();
	return 0;
}
