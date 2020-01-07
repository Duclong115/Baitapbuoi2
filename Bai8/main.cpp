#include<bits/stdc++.h>
using namespace std;
int m[10000];
void Quick(int mang[],int l,int r)
{
    if (l<=r )
    {
        int key=mang[(l+r)/2];
        int i=l;
        int j=r;
        while (i<=j)
        {
            while(mang[i]<key)
                i++;
            while (mang[j]>key)
                j--;
            if (i<=j)
            {
                swap(mang[i],mang[j]);
                i++;
                j--;
            }
        }
        if (l<j)
            Quick(mang,l,j);
        if(i<r)
            Quick(mang,i,r);
    }
}

void Chen(int &n1,int k,int x1)
{
    int i1,tam=x1;
    for(i1=k;i1<=n1+1;i1++)
    {
        swap(m[i1],tam);
    }
    n1++;
}

int main()
{
    int i,n,x;
    cin>>n;
    cin>>x;
    for(i=1;i<=n;i++)
    {
        cin>>m[i];
    }
    Quick(m,1,n);
        if(x>m[n])
            m[n]=x;
        else
            for(i=1;i<n;i++)
                if((x>=m[i])&&(x<m[i+1]))
                    m[i]=x;
    for (i=1;i<=n;i++)
    {
        cout<<m[i]<<" ";
    }
    return 0;
}
