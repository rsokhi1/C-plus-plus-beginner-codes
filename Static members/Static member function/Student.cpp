#include<iostream>
using namespace std;

class Student{
	public:
		static string schl;
		int roll_no;
		string name;
		string stream;
		void input(){
			cout<<"Enter roll number: ";
			cin>>roll_no;
			cout<<"Enter you name: ";
			cin>>name;
			cout<<"Enter you stream: ";
			cin>>stream;			
		}
		static void school(){
			cout<<"School name is "<<schl<<endl;
		}
		void display(){
			cout<<name<<"'s roll number is "<<roll_no<<" and he is in "<<stream<<endl;
		}
};

string Student::schl = "Bhavans";

int main(){
	Student std;
	std.input();
	Student::school();
	std.display();
	return 0;
}
