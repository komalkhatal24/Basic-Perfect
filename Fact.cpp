//Factorial of number
#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i =2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    // int ans=fact(n);
    cout<<"Factorial is "<<fact(n)<<endl;
    return 0;
}
