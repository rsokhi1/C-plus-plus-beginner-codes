#include<iostream>
using namespace std;

class arithmetic{
	protected:
		int num1,num2;
	public:
		void getdata(){
			cout<<"*** Addition ***\n\n";
			cout<<"Enter the 1st number: ";
			cin>>num1;
			cout<<"Enter the 2nd number: ";
			cin>>num2;
		}
};

class addition: public arithmetic{
	protected:
		int sum;
	public:
		void add(){
			sum = num1 + num2;
		}
};

class subtraction{
	protected:
		int n1,n2,diff;
	public:
		void minus(){
			cout<<"\n*** Subtraction ***\n\n";
			cout<<"Enter the 1st number: ";
			cin>>n1;
			cout<<"Enter the 2nd numebr: ";
			cin>>n2;
			diff = n1 - n2;
		}
};

class result:public addition,public subtraction{
	public:
		void display(){
			cout<<"\nSum of "<<num1<<" and "<<num2<<" is "<<sum<<endl;
			cout<<"Difference of "<<n1<<" and "<<n2<<" is "<<diff<<endl;
		}
};

int main(){
	result res;
	res.getdata();
	res.add();
	res.minus();
	res.display();
	return 0;
}
