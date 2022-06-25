#include<iostream>
using namespace std;
int main(){
    int num,i,sum = 0;
    cout<<"Enter any number: ";
    cin>>num;
    for(i=0;i<=num;i++){
        sum = sum + i;
    }
    cout<<"The sum of all digits is "<<sum;
}

