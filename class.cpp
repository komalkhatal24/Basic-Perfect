#include<iostream>
using namespace std;

class Account{
    private:
    string password;
    double balance;
    public:
    string userName;
    string accountId;

};

class Teacher{
    private:
    double salary;
    public:
     string name;
    string sub;
    string dept;
//Non parametrizees constructor
// Teacher(){
//     dept="CS"; 
// }

//custom copy constructor
Teacher(Teacher &orgObj){
    cout<<"custom c c"<<endl;
    this->name=orgObj.name;
    this->dept=orgObj.dept;
    this->sub=orgObj.sub;
}

//Parametrized constructor
Teacher(string n,string s,double sal){
    name=n;
    sub=s;
    salary=sal;
}
   

    void changeDept(string newDept){
        dept=newDept;
    }

    void setSalary(double s){
        salary=s;
    }
    double getSalary(){
        return salary;
    }

    void getInfo(){
    cout<<"name:"<<name<<endl;
    cout<<"sub:"<<sub<<endl;
}
};



int main(){
    Teacher t1("koaml","cs",25000);
    // t1.name="komal";
    // t1.sub="C++";
    // t1.setSalary(250000);
    // cout<<t1.name<<endl;
    // cout<<t1.getSalary()<<endl;
    // t1.getInfo();
    Teacher t2(t1);//default copy constructor
    t2.getInfo();
    return 0;
}