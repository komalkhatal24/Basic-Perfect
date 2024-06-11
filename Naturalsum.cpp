//Sum of Natural numbers
#include<iostream>
using namespace std;
int allSum(int n){
   int sum=0;
   for(int i=1;i<=n;i++){
    sum=sum+i;}
    return sum;
   }
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<allSum(n);
    return 0;
}