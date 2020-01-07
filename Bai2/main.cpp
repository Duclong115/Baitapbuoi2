#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a=0,d=0;
    cin>>n;
    int mang[n+1];
    for (i=1;i<=n;i++)
    {
        cin>>mang[i];
        if(mang[i]<0)
            a++;
        if( mang[i]>0)
            d++;
    }
    cout<<d<<" "<<a;
    return 0;
}
