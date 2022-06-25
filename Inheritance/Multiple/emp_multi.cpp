#include<iostream>
using namespace std;
class Employee{
	public:
		string name;
		int id;
		double salary;
		void input(){
			cout<<"Enter employee's Name: ";
			cin>>name;
			cout<<"Enter employee's Id: ";
			cin>>id;
			cout<<"Enter employee's salary: ";
			cin>>salary;
		}
};

class Boss{
	public:
		string b_name;
		int b_id;
		double b_salary;
		void b_input(){
			cout<<"Enter Boss's Name: ";
			cin>>b_name;
			cout<<"Enter Boss's Id: ";
			cin>>b_id;
			cout<<"Enter Boss's salary: ";
			cin>>b_salary;
		}
};

class Office:public Employee,public Boss{
	public:
		void display(){
			cout<<"Employee's Details: \n";
			cout<<"Name: "<<name<<" Id: "<<id<<" Salary: "<<salary<<endl;
			cout<<"\nBoss's Details: \n";
			cout<<"Name: "<<b_name<<" Id: "<<b_id<<" Salary: "<<b_salary<<endl;
		}	
};

int main(){
	Office off;
	off.input();
	off.b_input();
	off.display();
	return 0;
}
