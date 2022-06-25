#include<iostream>
using namespace std;
class MyClass{
	public:
	void myfunction(){
		cout<<"Some content in parent class.\n";
	}
};

class MyOtherClass{
	public:
		void myOtherFunction(){
			cout<<"Some content in another class.";
		}
};

class Student: public MyClass, public MyOtherClass{
};

int main (){
	Student std;
	std.myfunction();
	std.myOtherFunction();
	return 0;
}
