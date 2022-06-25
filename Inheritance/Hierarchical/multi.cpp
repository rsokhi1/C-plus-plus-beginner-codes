#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int roll_no;
		int marks[5];
};

class Name: public Student{
	public:
		void Details(){
				cout<<"Enter student's name: ";
				cin>>name;
				cout<<"Enter student's roll number: ";
				cin>>roll_no;
		}
};

class Marks: public Student{
	public:
		double Grades(){
			int i;
			double sum = 0,per = 0;
			cout<<"Enter your marks: \n";
			for(i=1;i<=5;i++){
				cout<<"Enter marks for "<<i<<" subject: ";
				cin>>marks[i];
				sum = sum + marks[i];
			}
			per = sum * 0.2;
			return per;
		}
};

int main(){
	double per;
	Name std;
	Marks obj;
	std.Details();
	per = obj.Grades();
	cout<<"Student name: "<<std.name<<" Roll No. "<<std.roll_no<<endl;
	cout<<"\nPercentage of the "<<std.name<<" is "<<per;
	return 0;
}
