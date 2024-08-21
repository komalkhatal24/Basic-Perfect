#include<iostream>
using namespace std;
int Vowelscount(string str){
    int vowels=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowels++;
        }
    }
    return vowels;
}
int main(){
  string str;
  cin>>str;
  cout<<Vowelscount(str);

}