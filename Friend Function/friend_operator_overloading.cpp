#include<iostream>
using namespace std;
class Total{
	int a,b;
	public:
		void get_data(){
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<endl;
		}
		friend Total operator+(Total,Total);
};

Total operator+(Total t1,Total t2){
	Total t;
	t.a = t1.a + t2.a;
	t.b = t1.b + t2.b;
	return t;
}

int main(){
	Total t1,t2,t3;
	t1.get_data();
	t2.get_data();
	t3=t1+t2;
	t3.show();
	return 0;
}
