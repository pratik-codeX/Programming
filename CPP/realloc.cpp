#include<iostream>

using namespace std;

int main()
{
    int size = 2;
    int arr[size];

    int *ptr = (int *)malloc(size*sizeof(int));

    int *p = (int*)realloc(ptr,size*sizeof(int));

    ptr = arr;

    arr[0]=10;

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);

    //p = (int*)realloc(ptr,0);

    //printf("%d",arr[0]);
    
    return 0;
}