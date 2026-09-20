#include<iostream>

using namespace std;

class Arithematic
{
    public:
    int no1,no2;

    Arithematic()
    {
        no1 = 0;
        no2 = 0;
    }

    ~Arithematic()
    {
        cout<<"Destructing Resources\n";
    }

    int Addition(int no1,int no2)
    {
        return no1+no2;
    }

    int Addition(float no1,float no2)
    {
        return no2 + no1;
    }

    double Addition(double no1,double no2)
    {
        return no1 + no2;
    }
};

int main()
{
    cout<<"Float is : "<<10.56f+32.0f<<"\n";
    Arithematic aobj;

    cout<<"Addition(int) is : "<<aobj.Addition(10,11)<<"\n";
    cout<<"Addition(float) is : "<<typeid(aobj.Addition(10.8f,11.0f)).name()<<"\n";
    cout<<"Addition(double) is : "<<aobj.Addition(10.2,11.1)<<"\n";
   
    return 0;
}