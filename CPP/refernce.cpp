#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    int &ref = a;

    cout<<"Address of a is :"<<&a<<endl;
    cout<<"Address of ptr is :"<<&ptr<<endl;

    cout<<"Address of ref is :"<<&ref<<endl;

    ref = 11;

    cout<<"ref changes a : "<< a<<endl;

    return 0;
}