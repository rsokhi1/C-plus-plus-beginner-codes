#include<iostream>
#include<exception>
using namespace std;
class MyException : public exception{
	public:
		const char* what() const throw(){
			return "Attempted to divide by zero!\n";
		}
};
int main(){
	try{
		int x,y;
		float k;
		cout<<"Enter the two numbers: ";
		cin>>x>>y;
		if(y==0){
			MyException z;
			throw z;
		}
		else{
			k = parseFloat(x/y);
			cout<<"x/y = "<<k<<endl;
		}
	}
	catch(exception& e){
		cout<<e.what();
	}
	return 0;
}
