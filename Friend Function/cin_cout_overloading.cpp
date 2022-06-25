#include<iostream>
using namespace std;
class Example{
	int a,b;
	public:
		friend istream& operator>>(istream&, Example&);
		friend ostream& operator<<(ostream&, Example&);
};

istream& operator>>(istream &in, Example &e){
	in>>e.a>>e.b;
	return in;
}

ostream& operator<<(ostream &out,Example &e){
	out<<"a= "<<e.a<<" b = "<<e.b;
	return out;
}

int main(){
	Example e1;
	cout<<"Enter value for a and b: ";
	cin>>e1;
	cout<<e1;
	return 0;
}
