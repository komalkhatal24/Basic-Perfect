//Decimalto binary
#include<iostream>
#include<cmath>
using namespace std;
int convert(long long n){
    int dec=0, i=0,rem=0;
    while(n!=0){
        rem=n%10;
        n=n/10;
        dec=dec+rem*pow(2,i);
    }
    return dec;
}
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    cout<<"Binary of "<<n<<" is "<<convert(n);
    return 0;
}