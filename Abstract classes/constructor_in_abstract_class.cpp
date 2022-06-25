#include<iostream>
using namespace std;
class Base{
	protected:
		int x;
	public:
		virtual void funct() = 0;
		Base(int i){
			x = i;
		}		
};

class Sub: public Base{
	int y;
	public:
		Sub(int i,int j): Base(j){
			y = i;
		}
		void funct(){
			{
				cout<<"x = "<<x<<" y = "<<y<<endl;
			}
		}
};

int main(){
	Sub s(69,56);
	s.funct();
	return 0;
}
