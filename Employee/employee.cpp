#include<iostream>
using namespace std;

class Variables{
    protected:
        static string company;
        string name;
        int id;
        double salary;
};

class Employee: public Variables{
    public:
    	Employee(string names, int id_no,double slry){
			name = names;
    		id = id_no;
    		salary = slry;
		}
        void print(){
            cout<<"Name   : "<<name<<endl;
            cout<<"Id     : "<<id<<endl;
            cout<<"Salary : "<<salary<<endl<<endl;
        }
};

class Manager: public Employee{
	protected:
		int mgr_id;
		string mgr_name;
		double mgr_salary;
	public:
		void input(){
			cout<<"Enter manager's Name: ";
			cin>>mgr_name;
			cout<<"Enter manager's id: ";
			cin>>mgr_id;
			cout<<"Enter manager's salary: ";
			cin>>mgr_salary;
		}
		void print(){
			cout<<"\nManager's Details: \n";
			cout<<"Manager's Name   : "<<mgr_name<<endl;
            cout<<"Manager's Id     : "<<mgr_id<<endl;
            cout<<"Manager's Salary : "<<mgr_salary<<endl<<endl;
		}
};

string Variables::company = "Unisoft";
int main(){
	string name;
    int id;
    double salary;
//    obj.input();
	Manager mgr;
	cout<<"Enter the name of the employee: ";
    cin>>name;
    cout<<"Enter the employee's salary: ";
    cin>>salary;
    cout<<"Enter the employee's id: ";
    cin>>id;
    Employee obj(name,id,salary);
    cout<<endl;
    mgr.input();
    obj.print();
    mgr.print();
    return 0;
}
