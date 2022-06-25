#include<iostream>
using namespace std;
class Negative{
	public:
		int a;
		void get_val(){
			cout<<"Enter a value: ";
			cin>>a;
		}
		void show(){
			cout<<"a = "<<a<<endl;
		}
};

Negative operator-(Negative n){
	n.a = -n.a;
	return n;
}

int main(){
	Negative n,n1;
	n.get_val();
	n1=-n;
	n1.show();
	n.get_val();
	n1 = operator-(n);
	n1.show();
	return 0;
}
