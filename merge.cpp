// Merge sort 

#include<bits/stdc++.h>

using namespace std;

void merge(int a[],int l, int mid, int h)
{
    int i=l;
    int j= mid+1;
    int k=l;
    
    int b[h+1];

    while (i <= mid && j<= h)
    {
       if( a[i]<= a[j])
       {
           b[k]=a[i];
           i++;
       }
       else
       {
           b[k]= a[j] ;
           j++;
       }
       k++;
    }
    if(i>mid)
    {
        for(int p=j ;p <= h; p++) // copy remaining element of j part 
        {
            b[k] = a[p]; k++;
        }
    }
    else
      for(int p=i ;p <= mid; p++)  // copy remaining element of i part 
        {
            b[k] = a[p]; k++;
        }
     

     for( int p=l; p<= h ; p++)    // copy result back to array
     {
         a[p]= b[p];
     }
}

void Merge_sort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid= (l+h)/2 ;
        Merge_sort(a,l,mid);
         Merge_sort(a,mid + 1,h);

         merge(a,l,mid,h);
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0;
    int h=n-1;
    Merge_sort(a,l,h);
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}