#include<iostream>
using namespace std;
class Sample{
	public:
	int a;
	public:
		void get_val(){
			cout<<"Enter a number: ";
			cin>>a;
		}
		void operator++(){
			++a;
		}
		void show(){
			cout<<"Incremented value = "<<a<<endl;
		}
};

int main(){
	Sample s;
	s.get_val();
	++s;
	
	s.show();
	return 0;
}
