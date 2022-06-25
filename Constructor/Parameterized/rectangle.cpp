#include<iostream>
using namespace std;
class rectangle{
	double b,l;
	public:
		rectangle(double l1,double b1){
			l = l1;
			b = b1;
		}
		void area(){
			double area;
			area = l * b;
			cout<<"Area of rectangle is "<<area<<endl;
		}
		void parameter(){
			double para;
			para = 2 * (l + b);
			cout<<"Parameter of rectangle is "<<para<<endl;
		}
};

int main(){
	double l,b;
	cout<<"Enter the length of rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of rectangle: ";
	cin>>b;
	rectangle rec(l,b);
	rec.area();
	rec.parameter();
	return 0;
}
