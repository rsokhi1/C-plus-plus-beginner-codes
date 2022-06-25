#include<iostream>
using namespace std;
class Addition{
	int n;
	public:
		void get_val(){
			cout<<"Enter a number: ";
			cin>>n;
		}
		void show_val(){
			cout<<"Sum = "<<n<<endl;
		}
		Addition operator+(Addition a)
		{
			Addition obj;
			obj.n=n+a.n;
			return obj;
		}
};

int main(){
	Addition a1,a2,a3;
	a1.get_val();
	a2.get_val();
	a3=a1+a2;
	a3.show_val();
	return 0;
}
