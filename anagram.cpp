#include <iostream>
#include<algorithm>
using namespace std;
bool anagram(string s1,string s2){
    if(s1.length()!=s2.length()){
        return  false;
    }
    sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
      return s1==s2;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(anagram(s1,s2)){
        cout<<"Anagram";
    }else{
        cout<<"no anagram";
    }
   }