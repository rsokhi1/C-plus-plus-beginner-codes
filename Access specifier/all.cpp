#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		int b;
	protected:
		int c;
	public:
		void show(){
			a = 10;
			b = 20;
			cout<<"\nAccessing variable within the class\n";
			cout<<"Value of a: "<<a<<endl;
			cout<<"Value of b: "<<b<<endl;
		}
};

int main(){
	A obj;
	obj.show();
	cout<<"\nAccessing the varaible outside the class"<<endl;
	cout<<"Value of a: "<<obj.a<<endl;
	cout<<"Value of b: "<<obj.b<<endl;
	cout<<"Value of c: "<<obj.c<<endl;
	return 0;
}
