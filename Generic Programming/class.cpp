#include<iostream>
using namespace std;

template <class t>
class A{
	t a,b;
	public:
		void get_data(){
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}
		int sum(){
			return a+b;
		}
};

int main(){
	A<int> a1;
	a1.get_data();
	cout<<"Add = "<<a1.sum();
}
