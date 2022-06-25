#include<iostream>
using namespace std;
class parent{
	public:
		parent(){
			cout<<"Inside base class\n";
		}
};

class child: public parent{
	public:
		child(){
			cout<<"Inside sub class\n";
		}
};

int main(){
	child obj;
	return 0;
}
