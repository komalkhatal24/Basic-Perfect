#include<iostream>
using namespace std;

void add(int a, int b){
    cout << (a + b) << endl;
}

void add(float a, float b){
    cout << (a + b) << endl;
}

int main(){
    add(2, 3);        
    add(22, 3.2);    
    return 0;
}
