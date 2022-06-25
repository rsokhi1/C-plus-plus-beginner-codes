#include<iostream>
using namespace std;
class Sample{
	public:
		static int a;
		void display_data(){
			cout<<"a= "<<a<<endl;
		}
};

int Sample::a;
int main(){
	cout<<Sample::a<<endl;
	Sample::a=10;
	Sample s1,s2;
	s1.a=20;
	s2.a=30;
	s1.display_data();
	s2.display_data();
	return 0;
}
