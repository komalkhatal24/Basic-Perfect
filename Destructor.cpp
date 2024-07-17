#include<iostream>
using namespace std;
class student{
    public:
    string name;
    double * cgpaPtr;
    //parametrized constuctor
    student(string name, double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }

    // destructor
    ~student(){
        cout<<"delete evrything"<<endl;
        delete cgpaPtr;     ///memory leak kami karnyasathi use the destructor   cgpaptr is teh dynamically allocated memory
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<cgpaPtr<<endl;
    }
};
int main(){
    student s1("komal",9);
    s1.getInfo();
    return 0;
}