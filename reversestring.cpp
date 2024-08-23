//nnaann
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
            
        }
        else{
            cout<<"n";
           return 0;
        }
    }
    cout<<"p";
    return 0;
}