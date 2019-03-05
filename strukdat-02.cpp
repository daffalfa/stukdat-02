#include<iostream>
using namespace std;

void moveZeroToEnd (int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i];

    while (count < n)
        arr[count++] = 0;
}

void input (int (&arr)[100],int& n)
{
    cin>>n;
}

void output (int arr[],int n)
{
    cout<<n;
}

int main()
{
    int arr[100];
    int n;
    input(arr,n);
    moveZeroToEnd(arr,n);
    output(arr,n);
}

