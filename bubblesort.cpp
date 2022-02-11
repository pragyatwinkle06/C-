//bubble sort ; adjacent elements are swapped

#include<bits/stdc++.h>

using namespace std;

void bubblesort(int arr[], int n)
{
    int c=1;
    while(c<n)
    {
    for(int i=0 ; i<n-c;i++)
    {
        if( arr[i]>arr[i+1])
        {
int temp= arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
        }
       
        }
        c++;
    }
cout<<"Sorted array\t";
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
     int n;
cout<<"Enter size\n";
cin>>n;
    int arr[n];

    cout<<"Enter\t "<<n<<"\t elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
bubblesort(arr,n);
return 0;
}