#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(nt i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==n||i==0){
                cout<<"*";
            }
            else if(j==n||j==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}