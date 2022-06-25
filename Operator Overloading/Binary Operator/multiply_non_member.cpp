#include<iostream>
using namespace std;
class Multiply{
	public:
		int a;
		void get_data();
		void show(){
			cout<<"Multiplication = "<<a<<endl;
		}
};
void Multiply::get_data(){
	cout<<"Enter two numbers: ";
	cin>>a;
}
Multiply operator*(Multiply m1,Multiply m2){
	Multiply obj;
	obj.a = m1.a * m2.a;
	return obj;
}

int main(){
	Multiply m1,m2,m3;
	m1.get_data();
	m2.get_data();
	m3 = m1 * m2;
	m3.show();
	m1.get_data();
	m2.get_data();
	m3 = operator*(m1,m2);
	m3.show();
	return 0;
}
