// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include<iostream>
using namespace std;
class student{
    public:
        string name;
        int roll_no;
        void print(){
            cout<<name<<" "<<roll_no;
        }
};

int main(){
    student std;
    cout<<"Enter the name: ";
    cin>>std.name;
    cout<<"Enter the roll number: ";
    cin>>std.roll_no;
    std.print();
}