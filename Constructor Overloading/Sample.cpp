#include<iostream>
using namespace std;
class Example{
	int a,b;
	public:
		Example(int n){
			a=n;
			b=n;
		}
		Example(int n1,int n2){
			a=n1;
			b=n2;
		}
		Example(){
			cout<<"Default constructor"<<endl;
		}
		void print_val(){
			cout<<"a= "<<a<<" b= "<<b<<endl;
		}
};

int main(){
	Example e(10);
	Example e1(2,6);
	Example e2;
	e.print_val();
	e1.print_val();
	return 0;
}
