/*  Max sub array sum using Kadane's algo
TC= O(n)
*/

#include<iostream>
#include<climits>

using namespace std;
int main()
{
     int n;
     cout<<"size?\n";
     cin>>n;
     int arr[n];
     cout<<"Array\n";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int cs=0; //current sum
int mxsum=INT_MIN ;

for(int i=0;i<n;i++)
{
cs+=arr[i];
if(cs<0)
    cs=0;


mxsum=max(mxsum,cs);
}
cout<<mxsum;
return 0;

}