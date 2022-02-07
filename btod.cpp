//binary to decimal
#include<iostream>
#include<cmath>
using namespace std ;



int bin_to_dec(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int l= n%10;
      ans= ans + x*l;
      x=x*2;
        n=n/10;
    }
    return ans;
}
int main()
{
    int num;
    cout<<"Enter Binary value\n";
    cin>>num;
    cout<<bin_to_dec(num);
    return 0;

}