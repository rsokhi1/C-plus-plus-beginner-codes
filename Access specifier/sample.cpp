#include<iostream>
using namespace std;
class exp{
	public:
		string a;
	private:
		int b;
	protected:
		int c;
	public:
		void print(){
			cout<<"Enter your name: ";
			cin>>a;
			cout<<"Enter your id: ";
			cin>>b;
			cout<<"Enter your salary: ";
			cin>>c;		
		}		
	
};

int main()
{
	exp sample;
	sample.print();
	cout<<"Name: "<<sample.a;
	return 0;
}
