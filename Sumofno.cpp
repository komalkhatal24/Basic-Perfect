//Sum of digit of a number
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,remainder;
    cout<<"Enter number ";
    cin>>n;
    while(n>0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    cout<<"sum "<<sum;
    return 0;
}