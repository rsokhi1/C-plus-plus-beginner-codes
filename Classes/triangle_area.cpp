// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.
#include<iostream>
using namespace std;
class triangle{
    public:
        double area(int b,int h){
            double ar;
            ar = (b * h) / 2;
            return ar;
        }
};
int main(){
    triangle tri;
    int b,h;
    double ar;
    cout<<"Enter base lenght: ";
    cin>>b;
    cout<<"Enter height: ";
    cin>>h;
    ar = tri.area(b,h);
    cout<<"Area of triangle is: "<<ar;
    return 0;
}