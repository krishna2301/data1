#include<iostream>
using namespace std;
int main()
{
    int n,a[20],i;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter an array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if((a[i]>a[i-1]) && (a[i]>a[i+1]))
        {
            cout<<a[i];
        }
    }
}
