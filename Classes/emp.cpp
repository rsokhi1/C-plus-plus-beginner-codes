#include<iostream>
using namespace std;

class emp{
	public:
		int id;
		string name;
		double salary;
};

int main(){
	emp objemp;
	cout<<"Enter the employee Id: ";
	cin>>objemp.id;
	cout<<"Enter the employee name: ";
	cin>>objemp.name;
	cout<<"Enter the salary: ";
	cin>>objemp.salary;
	cout<<objemp.id<<" "<<objemp.name<<" "<<objemp.salary;
	return 0;
}
