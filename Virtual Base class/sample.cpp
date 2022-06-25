#include<iostream>
using namespace std;
class A{
	public:
		int a;
};

class B:virtual public A{
	public:
		int b;
};

class C:virtual public A{
	public:
		int c;
};

class D: public B, public C{
	public:
		int total;
};

int main(){
	D obj;
	obj.a=26;
	obj.b=30;
	obj.c=90;
	obj.total = obj.a + obj.b + obj.c;
	cout<<obj.total<<endl;
	return 0;
}
