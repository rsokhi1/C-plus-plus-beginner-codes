#include<iostream>
using namespace std;
class Employee{
	public:
		int id;
		double salary;
		string name;
		void emp_input(){
			cout<<"Enter the employee's name: ";
			cin>>name;
			cout<<"Enter the employee's id: ";
			cin>>id;
			cout<<"Enter employee's salary: ";
			cin>>salary;
		}
};

class Manager:public Employee{
	public:
		string dep;
		void manager_input(){
			cout<<"Enter manager's department: ";
			cin>>dep;
			cout<<"Enter manager's name: ";
			cin>>name;
			cout<<"Enter manager's id: ";
			cin>>id;
			cout<<"Enter manager's salary: ";
			cin>>salary;
		}
};

class Director: public Manager{
	public:
		void director_input(){
			cout<<"Enter director's name: ";
			cin>>name;
			cout<<"Enter director's id: ";
			cin>>id;
			cout<<"Enter director's salary: ";
			cin>>salary;
		}

};

int main(){
	Employee emp;
	Manager mgr;
	Director dir;
	emp.emp_input();
	mgr.manager_input();
	dir.director_input();
	cout<<"Director's Data: \n";
	cout<<"Name: "<<dir.name<<" Id: "<<dir.id<<" Salary: "<<dir.salary<<endl;
	cout<<"Manager's Data: \n";
	cout<<"Name: "<<mgr.name<<" Id: "<<mgr.id<<" Salary: "<<mgr.salary<<endl;
	cout<<"Employee's Data: \n";
	cout<<"Name: "<<emp.name<<" Id: "<<emp.id<<" Salary: "<<emp.salary<<endl;
	return 0;
}
