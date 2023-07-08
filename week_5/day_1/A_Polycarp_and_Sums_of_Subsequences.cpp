#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;
void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void file()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main()
{
    fastio();
    file();
   long long t,a[7],sum=0;
   cin>>t;
   while (t--)
   {
       vector<long long>v;
       int maxx=a[0];
       for (size_t i = 0; i < 7; i++)
       {
           cin>>a[i];
           if(a[i]>maxx)
           maxx=a[i];
       }
       
       int c=0;
       for (size_t i = 0; i < 7; i++)
       {
           for (size_t j = 0; j <6; j++)
           {
              for (size_t k = j+1; k <6; k++)
              {
              
               if(a[i]==a[j]+a[k])
               c=1;
              }
           }
           if(c!=1)
           v.push_back(a[i]);
           c=0;
       }
       sum=v[0]+v[1];
       v.push_back(maxx-sum);
       for (size_t i = 0; i <3; i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       
   }
   
}