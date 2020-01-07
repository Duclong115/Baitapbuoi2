#include<bits/stdc++.h>
using namespace std;
void Quick(int mang[],int l,int r)
{
    if (l<r)
    {
        int key=mang[(l+r)/2];
        int i=l;
        int j=r;
        while (i<=j)
        {
            while (mang[i]<key)
                i++;
            while (mang[j]>key)
                j--;
            if(i<=j)
            {
                swap(mang[i],mang[j]);
                i++;
                j--;
            }
        }
        if(l<j)
            Quick(mang,l,j);
        if(i<r)
            Quick(mang,i,r);
    }
}

int main()
{
    int i,n,dem=1,tam;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    Quick(a,1,n);
    tam=a[1];
    for (i=2;i<=n;i++)
    {
        if(tam==a[i])
            dem++;
        else
        {
            cout << tam << " " << dem << endl;
            tam = a[i];
            dem = 1;
        }
    }
    cout<<tam<<" "<<dem;
    return 0;
}