#include<iostream>
using namespace std;
class time{
	int hh,mm,ss;
	public:
		time(int h,int m,int s){
			hh = h;
			mm = m;
			ss = s;
		}
	void print_data(){
		cout<<"Time = "<<hh<<":"<<mm<<":"<<ss<<endl;
	}
};

int main(){
	time t1(10,34,47),*pt;
	pt = &t1;
	pt->print_data();
	return 0;
}
