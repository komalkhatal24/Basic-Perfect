//multilevel
#include<iostream>
using namespace std;
class person{
    public:
    string name;
};
class student:public person{
    public:
    int roll_no;
};
class Btech:public student{
    public:
    int age;
};
int main(){
    Btech s1;
    s1.name="komal";
    s1.roll_no=3;
    cout<<s1.name<<endl;
    cout<<s1.roll_no<<endl;
    return 0;
}