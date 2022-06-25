//To print area and perimeter of a triangle
#include<iostream>
using namespace std;

class triangle{
    public:
        int b;
        int h;
        double ar;
};
class input:public triangle{
    public:
        double area(){
            cout<<"Enter the base: ";
            cin>>b;
            cout<<"Enter the height: ";
            cin>>h;
            ar = (b * h) / 2;
            return ar;
        }
};

int main(){
    input tri;
    double area;
    area = tri.area();
    cout<<"Area of traingle is: "<<area;
}