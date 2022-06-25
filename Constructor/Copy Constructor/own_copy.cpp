#include<iostream>
using namespace std;

class Demo{
	int a,b;
	public:
		void get_val(){
			cout<<"Enter two values: ";
			cin>>a>>b;
		}
		Demo(Demo &d){
			a=d.a;
			b=d.b;
		}
		void show_val(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
		Demo(){
			
		}
};

int main(){
	Demo d;
	d.get_val();
	Demo d1(d);
	d1.show_val();
	return 0;
}
