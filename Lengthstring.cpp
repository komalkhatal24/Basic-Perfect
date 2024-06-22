//Length of the give string
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter string ";
    cin>>str;
    int length=0;
    for(int i=0;str[i]>0;i++){
        length++;
    }
    cout<<"Lenghth is "<<length;
    return 0;
}