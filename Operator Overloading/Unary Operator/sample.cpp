#include<iostream>
using namespace std;
class Negative{
	int a;
	public:
		void get_data(){
			cout<<"Enter a value: ";
			cin>>a;
		}
		void show(){
			cout<<"a= "<<a<<endl;
		}
		void operator-(){
			a=-a;
		}
};

int main(){
	Negative n,n1;
	n.get_data();
	n1.get_data();
	-n;
	n1.operator-();
	n.show();
	n1.show();
	return 0;
}
