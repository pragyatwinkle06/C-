#include<bits/stdc++.h>

using  namespace std ;

void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
}

int Partition(int a[], int l, int h)
{
    int i=l;
    int j=h+1;
    a[j+1]= INT_MAX ;
    int x = a[l];
    do{
        do{
            i++;
        }while(a[i]<x);

         do{
            j--;
        }while(a[j]>x);

        if( i<j) 
        swap(a[i],a[j]);  
    }while(i<j);

 swap(a[l],a[j]);
     

    return j;
}
void quick_sort(int a[], int l ,int h)
{
    if(l<h)
    {
        int j;
        j=Partition(a,l,h);
        quick_sort(a,l,j-1);
        quick_sort(a,j+1,h);
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
    quick_sort(a,l,h);

     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
     return 0;

 }