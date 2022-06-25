#include<iostream>
using namespace std;
class Time{
	int hrs,min,secs;
	public:
		Time(int h,int m,int s){
			hrs = h;
			min = m;
			secs = s;
		}
		friend void show(Time);
};
void show(Time t){
	cout<<"Time "<<t.hrs<<":"<<t.min<<":"<<t.secs<<endl;
}

int main(){
	Time t1(8,40,32);
	show(t1);
	return 0;
}
