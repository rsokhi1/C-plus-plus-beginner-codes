#include<iostream>
using namespace std;
class Mammal{
	public:
		virtual void speak(){
			cout<<"Mammal spoke"<<endl;
		}
		virtual ~Mammal(){
			cout<<"Base destructor"<<endl;
		}
};

class Dog:public Mammal{
	public:
		void speak(){
			cout<<"Woof!...."<<endl;
		}
		~Dog(){
			cout<<"Sub destructor"<<endl;
		}
};

int main(){
	Mammal *pm = new Mammal;
	Mammal *pd = new Dog;
	pm->speak();
	pd->speak();
	delete pd;
	return 0;
}
