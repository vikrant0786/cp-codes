#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],flag=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                flag=1;break;
            }
        }
        if(flag==1)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
}
''
