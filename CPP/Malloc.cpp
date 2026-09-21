#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    void *ptr = (int*)malloc(sizeof(arr));

    ptr = arr;

    arr[0]=10;

    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);

    free(ptr);
    arr[1] = 10;

    return 0;
}