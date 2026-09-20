/*
    Constructor is Special function which gets initialized/invoked by compiler
*/

#include<iostream>

using namespace std;

class constructor
{
    public:
    constructor()
    {
        cout<<"Inside Constructor\n";
    }
};

int main()
{
    constructor obj;
    constructor obj1;

    cout<<"Address of obj :"<<&obj<<"\n";   //0x7fff3086f7f6 
    cout<<"Address of obj1 :"<<&obj1<<"\n"; //0x7fff3086f7f7

    return 0;
}