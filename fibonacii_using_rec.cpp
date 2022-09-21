#include<iostream>
using namespace std;

int fibo(int);

int main()
{
    int n,i;
    cout<<endl<<"Enter the number :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<" "<<fibo(i);
    }
}

int fibo(int n)
{
    if(n==0)
        return 0;

        else if(n==1)
            return 1;
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}