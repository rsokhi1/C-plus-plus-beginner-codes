#include<iostream>
using namespace std;
class Mammal{
	int weight;
	public:
		void move(){
			cout<<"Mammal moves 1 step "<<endl;
		}
		int move(int w){
			weight = w;
			cout<<"Moved with "<<weight<<" kg \n";
		}
};

class Dog:public Mammal{
	public:
		void move(){
			cout<<"Dog moves faster"<<endl;
		}
};

int main(){
	Dog d;
	d.move();
	return 0;
}
