// Subarray Sum 

#include<bits/stdc++.h>

using namespace std;
 int main()
 {
     int n,s;
     cout<<"size?\n";
     cin>>n;
     cout<<"sum?\n";
     cin>>s;
     int a[n];
     cout<<"Enter array?\n";
     for(int i=0;i<n;i++)
     cin>>a[i];

     for(int i=0;i<n;i++)
     { int mx=0;
         for(int j=i;j<n;j++)
            {
                mx +=  a[j] ;
            if(s == mx)
            {
                cout<<(i+1)<<" "<<(j+1);
                return 0;
            }
        }
     }

     return 0;
 }