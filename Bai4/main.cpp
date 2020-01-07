#include<bits/stdc++.h>
using namespace std;

int Check(int n1)
{
    int gh,i1;
    gh=int(sqrt(n1));
    if( n1==1||n1==0)
        return 0;
    if(n1==2||n1==3)
        return 1;
    for (i1=2;i1<=gh;i1++)
        if (n1%i1==0)
            return 0;
    return 1;
}

int Chinhphuong(int n2)
{
    int i2=int(sqrt(n2));
    if ((i2*i2)==n2)
        return 1;
    else
        return 0;
}


int main()
{
    int i,n,dem=0;
    cin>>n;
    int mang[n+1],kt[n+1];
    for (i=1;i<=n;i++)
    {
        cin>>mang[i];
        if (Check(mang[i])==1||Chinhphuong(mang[i])==1)
        {
            dem++;
            kt[dem] = mang[i];
        }
    }
    for (i=1;i<=dem;i++)
        cout<<kt[i]<<" ";
    return 0;
}