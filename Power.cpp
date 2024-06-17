//Power of the given number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int expo;
    float base;
    cin>>base>>expo;
    cout<<base<<"^"<<expo<<"="<<pow(base,expo)<<endl;
    return 0;
}