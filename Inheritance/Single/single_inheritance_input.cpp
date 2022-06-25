#include<iostream>
using namespace std;
class salary{
	public:
	double salary;
};

class emp:public salary{
	public:
		string name;
		int id;
	public:	
	void input(){
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter id: ";
		cin>>id;
		cout<<"Enter salary: ";
		cin>>salary;	
	}
};

int main(){
	emp obj;
	obj.input();
	cout<<obj.id<<" "<<obj.name<<" "<<obj.salary;
	return 0;
}
