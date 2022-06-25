// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include<iostream>
// #include<string.h>
using namespace std;
class student{
    public:
        string name;
        int roll_no;
};

int main(){
    int i=0;
    student std[100];
    while(1){
	    cout<<"Enter the name: ";
	    cin>>std[i].name;
	    if(std[i].name == "q") break;
	    cout<<"Enter roll number: ";
	    cin>>std[i].roll_no;
	    i++;
    }
    int j;
    for(j=0;j<i;i++){
        cout<<std[j].name<<" "<<std[j].roll_no;
    }
    return 0;
}
