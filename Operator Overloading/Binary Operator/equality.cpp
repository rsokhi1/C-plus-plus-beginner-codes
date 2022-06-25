#include<iostream>
using namespace std;
class Equality{
	int a;
	public:
		void get_data();
		int operator==(Equality);
};
void Equality::get_data(){
	cout<<"Enter two numbers: ";
	cin>>a;
}
int Equality::operator==(Equality e){
	return a==e.a;
}

int main(){
	Equality e1,e2;
	e1.get_data();
	e2.get_data();
	if(e1 == e2){
		cout<<"Objects are equal"<<endl;
	}	
	else{
		cout<<"Objects are not equal"<<endl;
	}
	return 0;
}
