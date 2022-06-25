#include<iostream>
using namespace std;
class minute{
	int min;
	public:
		void display(){
			cout<<"Total minutes "<<min;
		}
		void convert_hour(int hour){
			min = hour*60;
		}
};

class hour{
	int hr;
	public:
		void get_time(){
			cout<<"Enter total hours: ";
			cin>>hr;
		}
		operator minute(){
			minute m;
			m.convert_hour(hr);
			return m;
		}
};

int main(){
	hour h1;
	h1.get_time();
	minute m1=h1;
	m1.display();
	return 0;
}
