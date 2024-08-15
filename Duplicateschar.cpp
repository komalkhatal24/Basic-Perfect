//print the duplicates count in the string
#include<iostream>
#include<algorithm>
using namespace std;
void printDuplicates(string str){
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        int count=1;
       if(i<str.length()-1 && str[i]==str[i+1]){
       count++;
       i++;
    }
    //
    if(count>1){
        cout<<str[i]<<" count= "<<count<<endl;
    }
    }
}

int main(){
    string str;
    cin>>str;
    printDuplicates(str);
    return 0;
}
