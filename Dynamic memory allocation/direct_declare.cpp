#include<iostream>
using namespace std;
int main(){
	int *p = new int(10);
	float *pf = new float(20.5);
	cout<<"*p  : "<<*p<<endl;
	cout<<"*pf : "<<*pf<<endl;
	delete p;
	delete pf;
	return 0;
}
