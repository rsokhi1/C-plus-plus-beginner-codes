#include<iostream>
using namespace std;
class A{
	public:
		virtual void funct()=0;
		void f(){
			cout<<"Base function"<<endl;
		}
};

class B: public A{
	public:
		void funct(){
			cout<<"Pure virtual function definition"<<endl;
		}
};

int main(){
	A *pa;
	B b1;
	pa->f();
	b1.funct();
	b1.f();
	pa->f();
	pa=new B;
	pa->funct();
	delete pa;
	return 0;
}
