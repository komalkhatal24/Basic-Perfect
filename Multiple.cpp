//multiple inheretence
#include<iostream>
using namespace std;
class Student{
    public:
    int roll_no;
    string name;
};
class Teacher{
    public:
    string sub;
    double salary;
};
class Batch:public Student,public Teacher{

};
int main(){
    Batch A;
   
    cin>>A.name;
    cout<<A.name<<endl;
    cin>>A.roll_no;
    cout<<A.roll_no<<endl;
    return 0;
}