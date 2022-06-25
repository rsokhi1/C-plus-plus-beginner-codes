#include<iostream>
using namespace std;
class Exams{
    public:
        string name;
        double exam[5];
        void marks(){
            int i;
            cout<<"Enter student's name: ";
            cin>>name;
            for(i=0;i<5;i++){
                cout<<"Enter marks for "<<i+1<<" exam: ";
                cin>>exam[i];
            }
        }
};

class Percentage: public Exams{
    public:
        int i;
        double per = 0,sum = 0;
        void merit(){
            for(i=0;i<5;i++){
                sum = sum + exam[i];
            }
            per = sum * 0.2;
        }
};

class show: public Percentage{
    public:
        void display(){
            cout<<"\n"<<name<<"'s percentage are : "<<per;
        }
};

int main(){
    show obj;
    obj.marks();
    obj.merit();
    obj.display();
    return 0;
}