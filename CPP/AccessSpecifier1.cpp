#include<iostream>

using namespace std;

class demo
{
    public:
    int no = 10;
    private:
    int no1 = 11;
    protected:
    int no2 = 12;

    void Display()
    {
        cout<<no;
    }
};

class child: demo
{
    public:
    void Display()
    {
        cout<<demo::no1;
        cout<<demo::no2;
    }
};

int main()
{
    demo dobj;
    child cobj;
    
    //dobj.Display();
    cobj.Display();

    cout<<"Jay Ganesh...\n";

    return 0;
}