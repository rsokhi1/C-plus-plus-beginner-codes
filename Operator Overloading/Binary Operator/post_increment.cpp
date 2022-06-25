#include<iostream>
using namespace std;
class Sample{
	int a;
	public:
		void get_val(){
			cout<<"Enter a number: ";
			cin>>a;
		}
		void operator++(int){
			++a;
		}
		void show(){
			cout<<"Incremented value = "<<a;
		}
};

int main(){
	Sample s;
	s.get_val();
	s++;
	s.show();
	return 0;
}
