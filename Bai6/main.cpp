#include<bits/stdc++.h>
using namespace std;

int mb[10000],mc[10000];
void Loc(int a[],int &b1,int &c1,int &d1,int n1)
{
    int i1;
    b1=0; c1=0; d1=0;
    for (i1=1;i1<=n1;i1++)
    {
        if (a[i1]<0)
        {
            b1++;
            mb[b1]=a[i1];
        }
        if (a[i1]>0)
        {
            c1++;
            mc[c1]= -1 * a[i1];
        }
        if (a[i1]==0)
        {
            d1++;
        }
    }
}

void Quick(int mang[],int l1, int r1)
{
    if (l1<r1)
    {
        int key=mang[(l1+r1)/2];
        int i1=l1;
        int j1=r1;
        while (i1<=j1)
        {
            while(mang[i1]<key)
                i1++;
            while(mang[j1]>key)
                j1--;
            if (i1<=j1)
            {
                swap(mang[i1], mang[j1]);
                i1++;
                j1--;
            }
        }
        if (l1<j1)
            Quick(mang,l1,j1);
        if (i1<r1)
            Quick(mang,i1,r1);
    }
}

int main()
{
    int i,n,a,b,c,d;
    cin>>n;
    int m[n+1];
    for (i=1;i<=n;i++)
    {
        cin>>m[i];
    }

    Loc(m,b,c,d,n);

    Quick(mb,1,b);
    Quick(mc,1,c);

    for (i=1;i<=n;i++)
    {
        mc[i]=-1*mc[i];
    }

    for (i=1;i<=b;i++)
    {
        cout<<mb[i]<<" ";
    }
    for (i=1;i<=c;i++)
    {
        cout<<mc[i]<<" ";
    }
    for (i=1;i<=d;i++)
    {
        cout<<0<<" ";
    }
    return 0;
}
