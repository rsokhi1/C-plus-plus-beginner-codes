#include<iostream>
using namespace std;
class Sample{
	int item;
	float price;
	float quantity;
	public:
		Sample(){
		}
		Sample(int i, float j):item(i),price(j){
		}
		Sample calculate(){
			quantity = item * price;
			return (*this);
		}
		void display(){
			cout<<"Total amount: "<<quantity;
		}
};
int main(){
	Sample s1(20,34.5),s2;
	s2 = s1.calculate();
	s2.display();
	return 0;
}
