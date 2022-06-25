#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int roll_no;
	ifstream fin("C:\\C++ Unisoft\\File Handling\\sample.txt");
	fin>>roll_no;
	cout<<"Roll No is "<<roll_no;
}
