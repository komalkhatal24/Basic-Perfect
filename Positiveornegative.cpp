//Given number is positive or negative
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if(n==0){
        cout<<"Number is even";
    }
    else if(n>0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is odd";
    }
    return 0;
}

