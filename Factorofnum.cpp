//Factor of number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a num :";
    cin>>num;
    cout<<"Facror of "<<num <<"Are"<<endl;
    for(int i=1;i<=num;i++){
       if(num%i==0)
{
    cout<<i<<" ";
}    }
return 0;

}