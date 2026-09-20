#include<iostream>

using namespace std;

class Arithematic
{
    public:
    int no1,no2;

    Arithematic(int a, int b)
    {
        no1 = a;
        no2 = b;
    }

    ~Arithematic()
    {
        cout<<"Destructing Resources\n";
    }

    int Addition()
    {
        return no1+no2;
    }

    int Substraction()
    {
        return no2 - no1;
    }

    int Multiplication()
    {
        return no1 * no2;
    }

    int Division()
    {
        return no2 / no1;
    }

};

int main()
{

    Arithematic aobj(11,21);

    cout<<"Addition is : "<<aobj.Addition()<<"\n";
    cout<<"Substration is : "<<aobj.Substraction()<<"\n";
    cout<<"Multiplication is : "<<aobj.Multiplication()<<"\n";
    cout<<"Division is : "<<aobj.Division()<<"\n";

    return 0;
}