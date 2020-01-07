#include<bits/stdc++.h>
using namespace std;

void Quick(int a[],int l,int r)
{
    if (l<r)
    {
        int key=a[(l+r)/2];
        int i=l;
        int j=r;
        while (i<=j)
        {
            while (a[i]<key)
                i++;
            while (a[j]>key)
                j--;
            if (i<=j)
            {
                swap(a[i],a[j]);
                i++;
                j--;
            }
        }
        if (l<j)
            Quick(a,l,j);
        if (i<r)
            Quick(a,i,r);
    }
}

int main()
{
    int i,n;
    cin>>n;
    int mang[n+1];
    for (i=1;i<=n;i++)
    {
        cin>>mang[i];
    }
    Quick(mang,1,n);
    for(i=1;i<=n;i++)
    {
        cout<<mang[i]<<" ";
    }
    return 0;
}