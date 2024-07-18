#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;

    // person(){
    //     cout<<"first"<<endl;
    // }
    person(string name,int age){
        this->name=name;
        this->age=age;
    }

};
class student : public person{
    public:
    int roll_no;
    // student(){
    //     cout<<"second"<<endl;
    // }
    student(string name,int age,int roll_no):person( name, age){
        this->roll_no=roll_no;
    }
    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;   
        cout<<"roll_no: "<<roll_no<<endl;
         }
};
int main(){
    student s1("koml",6,8);
    
    s1.getInfo();
    return 0;
}
