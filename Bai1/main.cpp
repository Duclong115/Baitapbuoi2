#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int mang[n+1];
    for(i=1;i<=n;i++)
    {
        cin >> mang[i];
    }

    for(i=n;i>=1;i--)
    {
        cout<<mang[i]<<" ";
    }
    return 0;
}

