#include<iostream>
using namespace std;
class Sample{
	int num;
	public:
		static int a;
		Sample (int n){
			num = n;
		}
		static void display_data(){
			cout<<"a = "<<a<<endl;
		}
		void show(){
			cout<<"num = "<<num<<endl;
		}
};
int Sample::a = 5;
int main(){
	Sample s(10);
	Sample::display_data();
	s.show();
	return 0;
}
