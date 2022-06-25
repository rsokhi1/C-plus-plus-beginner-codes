#include<iostream>
using namespace std;
class Demo{
	int a,b;
	public:
		Demo(int i){
			a=i;
			b=i;
		}
		void display(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};

int main(){
	int a;
	cout<<"Enter a value: ";
	cin>>a;
	Demo d = a;
	d.display();
	return 0;
}
