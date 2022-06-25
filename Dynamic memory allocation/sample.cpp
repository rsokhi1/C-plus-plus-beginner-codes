#include<iostream>
using namespace std;
int main(){
	int *p = new int;
	*p = 10;
	float *pf = new float;
	*pf = 2.6;
	cout<<"*p  :"<<*p<<endl;
	cout<<"*pf :"<<*pf<<endl;
	delete p;
	delete pf;
	return 0;
}
