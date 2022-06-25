#include<iostream>
using namespace std;
class Decrement{
	int a;
	public:
		void input(){
			cout<<"Enter any number: ";
			cin>>a;
		}
		void operator--(int){
			a--;
		}
		void show(){
			cout<<"Decremented value is : "<<a<<endl;
		}
};

int main(){
	Decrement obj;
	obj.input();
	obj--;
	obj.show();
	return 0;
}
