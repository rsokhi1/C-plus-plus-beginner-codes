#include<iostream>
using namespace std;
class car{
	public:
	string brand;
	string model;
	int year;
};

int main(){
	car carobj;
	cout<<"Enter the car's brand: ";
	cin>>carobj.brand;
	cout<<"Enter the car's model: ";
	cin>>carobj.model;
	cout<<"Enter the car's manufacturing year: ";
	cin>>carobj.year;
	cout<<carobj.brand<<" "<<carobj.model<<" "<<carobj.year<<endl;
	return 0;
}
