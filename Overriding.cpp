#include<iostream>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout<<"Parent"<<endl;
    }
    virtual void Hello(){
        cout<<"Hello"<<endl;
    }
};
class Child:public Parent{
    public:
    void getInfo(){
        cout<<"Child"<<endl;
    }
    void Hello(){
        cout<<"hello C  "<<endl;
    }
};
int main(){
    Child C;
    C.getInfo();
    C.Hello();
    return 0;
}
