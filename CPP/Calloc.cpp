#include<iostream>

using namespace std;

int main()
{
    int size = 5;
    int arr[size];
    void *ptr = (int*)calloc(size,sizeof(arr));

    ptr = arr;

    arr[0]=10;

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);

    return 0;
}