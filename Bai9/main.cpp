#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,max;
    cin>>n;
    int a[n+1];
    cin>>a[1];
    max=a[1];
    for (i=2;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]>max)
            max=a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==max)
            cout<<i<<" ";
    }
    return 0;
}