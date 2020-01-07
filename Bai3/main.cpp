#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,dem=0;
    cin>>n;
    int mang[n+1];
    for (i=1;i<=n;i++)
    {
        cin>>mang[i];
        if (n%mang[i]==0)
            dem++;
    }
    cout<<dem;
    return 0;
}