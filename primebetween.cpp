#include<iostream>
using namespace std;
bool prime(int n){
if(n<2){
cout<< "non pme";
}
for(int i=2;i<n;i++){
if(n%2==0){
return false;
break;
}}
return true;

}
int main(){
int a, b;
cout<<"starting";
cin>>a;
cout<<"ending";
cin>>b;
for (int i = a; i <= b; i++) {

if (prime(i)) {

cout << i << " ";
}
}
return 0;
}