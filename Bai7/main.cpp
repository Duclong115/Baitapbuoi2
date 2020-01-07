#include<bits/stdc++.h>
using namespace std;
int m[10000];
void Xoa(int &n1,int k1)
{
    int i1;
    for (i1=k1;i1<n1;i1++)
    {
        m[i1]=m[i1+1];
    }
    n1--;
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
    for (i=1;i<=n;i++)
    {
        if(m[i]==x)
        {
            Xoa(n,i);
            i--;
        }
    }
    for (i=1;i<=n;i++)
    {
        cout<<m[i]<<" ";
    }
}