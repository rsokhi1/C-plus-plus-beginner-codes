#include<iostream>
using namespace std;
class Vehicle{
	private:
		void start(){
			cout<<"Start the engine \n";
		}
	protected:
		void drive(){
			cout<<"Drive \n";
		}
	public:
		void horn(){
			cout<<"horn please!\n";
			drive();
			start();
		}
};

class Bike:public Vehicle{
	public:
		void wheels(){
			cout<<"Two wheeler vehicle\n";
		}
};

int main(){
	Bike b1;
	b1.wheels();
	b1.horn();
//	b1.drive();
//	b1.start();
	return 0;
}
