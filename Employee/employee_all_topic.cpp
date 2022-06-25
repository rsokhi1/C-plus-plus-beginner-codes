#include<iostream>
using namespace std;
class Employee{
    public:
        static string company;
        int id;
        string name;
        string ssn;
        double salary;
        string new_name;
        double raised_salary;
    public:
		    
//        Employee(int id_f, string name_f, string ssn_f, double salary_f){
//            id = id_f;
//            name = name_f;
//            ssn = ssn_f;
//            salary = salary_f;
//        }
//    void change_name(){
//        cout<<"Enter name: ";
//        cin>>new_name;
//        if(new_name == NULL){
//            cout<<"ERROR: Name cannot be empty!\n";
//            cout<<"Enter name: ";
//            cin>>new_name;
//        }
//        else if(new_name == name){
//            cout<<"ERROR: New name cannot be same as the previous name!\n";
//            cout<<"Enter name: ";
//            cin>>new_name;
//        }
//        else{
//            name = new_name;
//        }
//    }
    void increment(){
        cout<<"Enter your increment amount: ";
        cin>>raised_salary;
        if(raised_salary == 0){
            cout<<"ERROR: Increment cannot be 0!\n";
            cout<<"Enter your increment amount: ";
            cin>>raised_salary;
        }
    }
    void input(){
    	cout<<"Enter Employee id: ";
    	cin>>id;
    	cout<<"Employee's name: ";
    	cin>>name;
    	cout<<"Enter employee's ssn: ";
    	cin>>ssn;
    	cout<<"Enter employee's salary: ";
    	cin>>salary;
	}
};

class Manager: public Employee{
//    int mgr_id;
//    string mgr_name;
//    int mgr_ssn;
//    double mgr_salary;
	protected:
		string department;
	public:
		Manager(int mgr_id,string mgr_name,int mgr_ssn,double mgr_salary){
			id = mgr_id;
			name = mgr_name;
			ssn = mgr_ssn;
			salary = mgr_salary;
		}
//    Manager(string dep):Employee(mgr_id,mgr_name,mgr_ssn,mgr_salary){
//        department = dep;
//    }
	public:
    void input(){
    	cout<<"Enter Department: ";
    	cin>> department;
	}
	void print(){
		cout<<"ID         : "<<id<<endl;
		cout<<"Name       : "<<name<<endl;
		cout<<"SSN        : "<<ssn<<endl;
		cout<<"Salary     : "<<name<<endl;
		cout<<"Department : "<<department<<endl;
	}
};

//class Director: public Manager{
//    Director():Manager(department){
//        ;
//    }
//};

int main(){
    Employee e1;
    e1.input();
    Manager m1(e1.id,e1.name,e1.ssn,e1.salary);
    m1.input();
    m1.print();
    return 0;
}
