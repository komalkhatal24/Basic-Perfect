#include<iostream>
using namespace std;
 class Student{
    public:
    string name;

 };
 class S:public Student{
    public:
    string name;
 };
 class T:public Student{

 };
 class TA:public S,public T{
    public:
 
 };
int main(){
   TA math;
   
   math.S::name = "kk";
   cout<<math.name;
   return 0;
}