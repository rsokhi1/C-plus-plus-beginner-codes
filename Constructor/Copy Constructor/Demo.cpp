#include<iostream>
using namespace std;

class Demo{
	int a,b;
	public:
		void get_val(){
			cout<<"Enter two values: ";
			cin>>a>>b;
		}
		void show_val()
		{
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};

int main(){
	Demo d;
	d.get_val();
	Demo d1(d);
	d1.show_val();
	return 0;
}
