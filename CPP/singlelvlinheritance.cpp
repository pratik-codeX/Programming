#include<iostream>

using namespace std;

class Parent
{
    public:
    int no1,no2;

    Parent()
    {
        cout<<"Inside Parent";
        no1 = 0;
        no2 = 0;
    }
};

class Child:public Parent       //Single level Inheritance
{
    public:
    Child()
    {
        cout<<"Inside Child";
    }
};

int main()
{
   Child obj;



   
    return 0;
}