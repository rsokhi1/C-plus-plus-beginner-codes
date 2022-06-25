#include<iostream>
using namespace std;
class Parent{
	protected:
		int t;
	public:
		virtual void multiply(int i,int j) = 0;
		void display(){
			cout<<"Multiplication is = "<<t<<endl;
		}
};
class Multi:public Parent{
	public:
		void multiply(int i, int j){
			t = i * j;
		}
};

int main(){
	int a,b;
	cout<<"Enter the numbers you want to multiply: ";
	cin>>a>>b;
	Multi m;
	m.multiply(a,b);
	m.display();
	return 0;
}
