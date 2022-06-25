#include<iostream>
using namespace std;
class Sample{
	int a;
	public:
		void set_variable(int a){
			this->a=a;
		}
		void display(){
			cout<<"a = "<<a<<endl;
		}
};
int main(){
	Sample s1;
	s1.set_variable(40);
	s1.display();
	return 0;
}
