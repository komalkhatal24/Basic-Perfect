#include<iostream>
using namespace std;
class Car{
    public:
    string name; 
    string model;
};
class Kia:public Car{
    public:
    string colour;

};
class Hector:public Kia{
    public:
    string model;
};
int main(){
   Hector h1;
   h1.name="oh";
   h1.colour="black";
   cout<<h1.name<<endl;
   cout<<h1.colour<<endl;
   return 0;
}