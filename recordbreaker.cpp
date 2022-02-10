//Number of record breaking days - kickstart problem 2
#include<bits/stdc++.h>
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
     int rb=0;
     int i=0;
     int j=i+1;
     int mx=-1;
     if(n==1)
     {
         cout<<"1"<<endl;
         return 0;
     }
     while(i<j && j<n)
     {
         if(arr[i]>arr[j] && arr[i] > mx)
         {
         rb++;
         mx=max(arr[i],mx);
         }
         i++;
         j++;
     }
     cout<<"Record breaking\t"<<rb;
return 0;
 }