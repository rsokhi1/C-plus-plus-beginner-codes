#include<iostream>
#define MIN_YEAR 2010
#define MAX_YEAR 2021
using namespace std;
class month_year{
    public:
        int year;
        int month;
        string mon;
        void month_input(){
            cout<<"Set the year and month for the well-being log (YYYY MM): ";
            cin>>year>>month;
            while(year < MIN_YEAR || year > MAX_YEAR || month > 12|| month < 1 ){
                if(year < MIN_YEAR || year > MAX_YEAR || month > 12|| month < 1){
                    cout<<" ERROR: The year must be between "<<MIN_YEAR<<" and "<<MAX_YEAR<<" inclusive\n";
                    cout<<"   ERROR: Jan.(1) - Dec.(12)\n";
                    cout<<"Set the year and month for the well-being log (YYYY MM): ";
                    cin>>year>>month;
                }
                else if(year < MIN_YEAR || year > MAX_YEAR){
                    cout<<" ERROR: The year must be between "<<MIN_YEAR<<" and "<<MAX_YEAR<<" inclusive\n";
                    cout<<"Set the year and month for the well-being log (YYYY MM): ";
                    cin>>year>>month;
                }
                else if(month > 12|| month < 1){
                    cout<<"ERROR: Jan.(1) - Dec.(12)\n";
                    cout<<"Set the year and month for the well-being log (YYYY MM): ";
                    cin>>year>>month;
                }
            }
            cout<<"\n*** Log date set! ***\n\n";
        }
        
};

class month_dec: public month_year{
    public:
        void month_fin(){
            if(month == 1){
                mon = "JAN";
            }
            else if( month == 2){
                mon = "FEB";
            }
            else if( month == 3){
                mon = "MAR";
            }
            else if( month == 4){
                mon = "APR";
            }
            else if( month == 5){
                mon = "MAY";
            }
            else if( month == 6){
                mon = "JUN";
            }
            else if( month == 7){
                mon = "JUL";
            }
            else if( month == 8){
                mon = "AUG";
            }
            else if( month == 9){
                mon = "SEP";
            }
            else if( month == 10){
                mon = "OCT";
            }
            else if( month == 11){
                mon = "NOV";
            }
            else if( month == 12){
                mon = "DEC";
            }
        
        } 
};

class rate: public month_dec{
    public:
        double mr[3],er[3];
        void rate_input(){
            int i;
            for (i=0;i<3;i++){
                cout<<"\n"<<year<<"-"<<mon<<"-"<<i+1<<endl;
                cout<<"   Morning rating (0.0-5.0): ";
                cin>>mr[i];
                while(mr[i]<0.0 || mr[i] > 5.0){
                    cout<<"      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n";
                    cout<<"   Morning rating (0.0--5.0): ";
                    cin>>mr[i];
                }
                cout<<"   Evening rating (0.0-5.0): ";
                cin>>er[i];
                while(er[i]<0.0 || er[i] > 5.0 ){
                    cout<<"      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n";
                    cout<<"   Evening rating (0.0-5.0): ";
                    cin>>er[i];
                }
            }
        }
};

class summary: public rate{
    public:
    double sumer = 0, summr = 0, sumall, avgmr, avger, avgall;
        void total(){
            int i;
            for(i=0;i<3;i++){
                summr = summr + mr[i];
                sumer = sumer + er[i];
            }
            sumall = summr + sumer;
            avgmr = summr / 3;
            avger = sumer / 3;
            avgall = (avger + avgmr) / 2;
        }
        void print(){
            cout<<"\nSummary\n";
            cout<<"=======\n";
            cout<<"Morning total rating: "<<summr<<endl;
            cout<<"Evening total rating: "<<sumer<<endl;
            cout<<"---------------------------\n";
            cout<<"Overall total rating: "<<sumall<<endl;
            cout<<"\nAverage morning rating:  "<<avgmr<<endl;
            cout<<"Average evening rating:  "<<avger<<endl;
            cout<<"---------------------------\n";
            cout<<"Average overall rating:  "<<avgall;
        }
};

int main(){
    summary obj;
    obj.month_input();
    obj.month_fin();
    obj.rate_input();
    obj.total();
    obj.print();
    return 0;
}