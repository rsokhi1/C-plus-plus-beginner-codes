#include<iostream>
using namespace std;
class Demo{
	int a,b;
	public:
		Demo(int n){
			a=n;
			b=n;
		}
		void show_results(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
};

int main(){
	Demo d(5);
	
	Demo d1 = Demo(3);
	
	Demo d2=10;
	
	d.show_results();
	d1.show_results();
	d2.show_results();
	return 0;
}
