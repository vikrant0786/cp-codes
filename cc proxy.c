#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,p=0,i,proxy=0,flag=1;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for( i=0;i<n;i++)
        {
            if(s[i]=='P')
                p++;
        }
        for(i=2;i<n-2;i++)
        {
            if(p*100/n>=75)
               break;
               if(p*100/n<=75)
               {
                   if(s[i]=='A')
                   {
                       if((s[i-1]=='P'||s[i-2]=='P') && (s[i+1]=='P'||s[i+2]=='P'))
                       {
                        p++;
                        proxy++;
                       }
                   }
               }
               if(i==n-3&&p*100/n<75)
                flag=0;
        }
        if(flag==0)
            printf("-1\n");
            else
            printf("%d",proxy);
        t--;
    }
}
