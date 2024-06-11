//Sum of natural numbers in a given range
#include<iostream>
using namespace std;
int main(){
    int sum=0,lower,largest;
    cout<<"Enter the lower limt: ";
    cin>>lower;
    cout<<"enter a largest number: ";
    cin>>largest;

    for(int i =lower;i<=largest;i++){
        sum=sum+i;
    }

    cout<<"the sum of " << lower <<" to "<< largest <<" is "<<sum;
    return 0;
}