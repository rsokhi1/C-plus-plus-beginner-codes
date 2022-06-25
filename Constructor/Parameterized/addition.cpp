#include<iostream>
using namespace std;

class Addition{
	int num1,num2,rs;
	public:
		Addition(int n1,int n2){
			num1=n1;
			num2=n2;
		}
		void calculate(){
			rs=num1+num2;
		}
		void show_results(){
			cout<<"Addition = "<<rs;
		}
};

int main(){
	Addition add(10,34);
	add.calculate();
	add.show_results();
	return 0;
}
