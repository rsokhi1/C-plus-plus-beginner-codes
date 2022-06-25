#include<iostream>
using namespace std;

class Sample{
	public:
		Sample(){
			cout<<"Default constructor"<<endl;
		}
		~Sample(){
			cout<<"Destructor is called"<<endl;
		}
};

int main(){
	Sample s;
	Sample s1;
	cout<<"Here\n";
	return 0;
}
