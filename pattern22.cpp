/*
5
45
345
2345
12345
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<=n;i++){
        int start=n-i;
        for(int j=0;j<=i;j++){
            cout<<start;
            start++;
        }
        cout<<endl;
    }

}