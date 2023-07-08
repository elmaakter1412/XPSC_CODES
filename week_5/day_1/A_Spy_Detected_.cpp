//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1; t<=T; t++)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int b[n+1];
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
            b[i]=arr[i];
        }
        for(int j=1; j<=n; j++)
        {
           if(b[j]==arr[j+1])
            {
                continue;
            }
            else if(b[j]!=arr[j+1])
            {
                if(arr[j+1]==arr[j+2])
                {
                    printf("%d\n",j);
                    break;
                }
                else
                {
                    printf("%d\n",j+1);
                    break;
                }
            }
        }
 
    }
    return 0;
}