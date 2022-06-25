#include<iostream>
using namespace std;
class Demo{
	int a,b;
	public:
		Demo(int i){
			a = i;
			b = i;
		}
		friend int add(Demo);
};
int add(Demo d){
	return d.a + d.b;
}

int main(){
	int x;
	cout<<"Enter a value: ";
	cin>>x;
	Demo d = x;
	cout<<"Addition = "<<add(d)<<endl;
	return 0;
}
