#include<iostream>
using namespace std;
int main(){
	int i;
	int *roll_no = new int[3];
	*roll_no = 101;
	*(roll_no + 1) = 102;
	*(roll_no + 2) = 103;
	for(i = 0; i < 3;i++){
		cout<<"Roll no: "<<roll_no[i]<<endl;
	}
	delete roll_no;
	return 0;
}
