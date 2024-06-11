//Leap yer or not
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a year for check: ";
    int year;
    cin>>year;
    if((year%4==0) && (year%100!=0)||
    (year%400==0)){
        cout<<year<<" is the leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
    return 0;

}