//first repeating element index (smallest)

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i=0;
    cout<<"size\n";
    cin>>n;
                 //very large value of n
    int a[n];
    cout<<"array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    int id[N];
    for ( i = 0; i<N; i++)
    {
        id[i]= -1;
    }
    int minid= INT_MAX ;
    for( i=0;i<n;i++)
    {
        if( id[a[i]] != -1)
        {
            minid=min(minid,id[a[i]]);
        }
        else{
            id[a[i]]=i;
        }
    }
    if( minid == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minid + 1<<endl;
    }
  return 0;  
}