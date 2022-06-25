#include<iostream>
using namespace std;
int main(){
    cout<<"Program to find the sum of digits\n\n";
    int num,sum=0,m;
    cout<<"Enter any number: ";
    cin>>num;
    while(num != 0){
        m = num % 10;
        sum = sum + m;
        num = num / 10;
    }
    cout<<"The sum of digits is "<<sum;
    return 0;
}