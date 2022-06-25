// We want to calculate the total marks of each student of a class in Physics,Chemistry and Mathematics and the average marks of the class. The number of students in the class are entered by the user. Create a class named Marks with data members for roll number, name and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used to define marks in individual subject of each student. Roll number of each student will be generated automatically.
#include<iostream>
using namespace std;

class Marks{
    public:
        int roll_no = 1;
        string name[100];
        double phy[100];
        double chem[100];
        double math[100];
        double avg[100];
};

class physics: public Marks{
    public:
        void phy_mark(int index){
            // double marks;
            cout<<"Enter Physics marks for roll number "<<index<<" : ";
            cin>>phy[index];
            while(phy[index] < 0.0){
                cout<<"ERROR: Marks cannot be negative.\n";
                cout<<"Enter Physics marks for roll number "<<index<<" : ";
                cin>>phy[index];
            }
        }
};

class chemistry: public physics{
    public:
        void chem_mark(int index){
            // double marks;
            cout<<"Enter Chemistry marks for roll number "<<index<<" : ";
            cin>>chem[index];
            while(chem[index] < 0.0){
                cout<<"ERROR: Marks cannot be negative.\n";
                cout<<"Enter Chemistry marks for roll number "<<index<<" : ";
                cin>>chem[index];
            }
        }
};

class mathematics: public chemistry{
    public:
        void math_mark(int index){
            // double marks;
            cout<<"Enter Maths marks for roll number "<<index<<" : ";
            cin>>math[index];
            while(math[index] < 0.0){
                cout<<"ERROR: Marks cannot be negative.\n";
                cout<<"Enter Maths marks for roll number "<<index<<" : ";
                cin>>math[index];
            }
        }
};

class result: public mathematics{
    public:
        void average(int index){
            avg[index] = (phy[index] + chem[index] + math[index]) / 3;
            
        }
};

void print(int size){
    result obj1;
    int i;
    for(i=1;i<=size;i++){
        cout<<"\n"<<obj1.name[i]<<"'s marks : \n";
        cout<<"\t\tPhysics     : "<<obj1.phy[i]<<endl;
        cout<<"\t\tChemistry   : "<<obj1.chem[i]<<endl;
        cout<<"\t\tMathematics : "<<obj1.math[i]<<endl;
        cout<<"\n\t\t"<<obj1.name[i]<<"'s average marks: "<<obj1.avg[i]<<endl;
    }
}

int main(){
    result obj;
    int i,std;
    cout<<"Enter the number of students : ";
    cin>>std;
    for(i=1;i<=std;i++){
        cout<<"\nEnter the student's name: ";
        cin>>obj.name[i];
        obj.phy_mark(i);
        obj.chem_mark(i);
        obj.math_mark(i);
        obj.average(i);
    }
    for(i=1;i<=std;i++){
        cout<<"\n"<<obj.name[i]<<"'s marks : \n";
        cout<<"\t\tPhysics     : "<<obj.phy[i]<<endl;
        cout<<"\t\tChemistry   : "<<obj.chem[i]<<endl;
        cout<<"\t\tMathematics : "<<obj.math[i]<<endl;
        cout<<"\t\t"<<obj.name[i]<<"'s average marks: "<<obj.avg[i]<<endl;
    }

    return 0;
}