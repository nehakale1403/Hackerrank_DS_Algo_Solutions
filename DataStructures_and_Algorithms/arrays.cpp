#include<iostream>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[MAX], n, i;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<N;i++)
    {
        cout<<a[N-i]<<" ";
    } 
    return 0;
}