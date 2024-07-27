#include<iostream>
using namespace std;
class Car{
    int B,A;
    public:
    void function(int fast,int slow){
        B=fast;
        A=slow;
}
void getfunction(){
    cout<<"Qualities"<<B<<A<<endl;
}
friend string AllColor();
};

 string AllColor(){
   
};
int main(){
    Car Nano;
    Nano.function(50,40);
    Nano.getfunction();
    return 0;
}
