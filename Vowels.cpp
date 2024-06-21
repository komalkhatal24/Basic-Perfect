#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter  alphabet: ";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'|| c=='u'||c=='A' || c=='E' ||c=='I'||c=='O'||c=='U')
    {
        cout<<"Is a vowel ";
    }

else{
    cout<<"It's consonant ";
}

return 0;
}