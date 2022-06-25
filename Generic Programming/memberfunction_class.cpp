#include<iostream>
using namespace std;
template <class t>
class A{
	t a;
	public:
		void get_data(){
			cout<<"Enter any number: ";
			cin>>a;
		}
		t operator+(t);
};
template <class t>
t A<t>::operator+(t b){
	return a+b;
}

int main(){
	A<int> a1;
	a1.get_data();
	cout<<a1+4;
}
