#include<iostream>
using namespace std;
class square{
	int a=1;
	public:
		square(){
			while(1){
				cout<<"Enter any number (0 = Quit):";
				cin>>a;
				if(a == 0){
					cout<<"Good-Bye!\n";
					break;
				}
				cout<<"Square of "<<a<<" is "<<a*a<<endl;
				
			}
		}
};

int main(){
	square s;
	return 0;
}
