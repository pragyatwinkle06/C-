//Arithmetic subarray problem  : kick start question 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Array size\n";
    cin>>n;
    int arr[n];
    cout<<"Enter array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int pd=arr[1] - arr[0];
    int cur=2;
    int ans=2;
    int j=2;
    while(j<n)
    {
        if(pd == (arr[j]- arr[j-1]))
       {
        cur++;
       }

        else
        {
            pd=arr[j] - arr[j-1];
            cur=2;
            
        }
        ans=max(ans,cur);
        j++;
    }
    cout<< ans <<endl;

    return 0;

}