// All the banks operating in India are controlled by RBI. RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to a saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it.
// 
// Write a program to implement bank functionality in the above scenario. Note: Create few classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). Assume and implement required member variables and functions in each class.
#include<iostream>
using namespace std;

class RBI{
    public:
        double min_int_rate = 4, min_bal = 1000, max_wdl = 25000;
        struct account{
            string bank;
            string acc_num;
            int balance;
            
        };
};

class account{
    protected:
        void add_acc(){
            cout<<"Enter customer's name"
        }
}

class SBI: public RBI{

};