//binary numbers addition 

#include<bits/stdc++.h>

using namespace std;

int reverse(int num)
{
    int x=0;
    while(num>0){
        int ll= num%10;
        x = 10*x + ll;
        num/=10;

    }
    return x;
}

int addbin(int a , int b)
{    int ans=0;
 int prevc=0;
    while(a>0 && b>0)
    {
      if( a%2==0 && b%2== 0)    //case1: both the digits are 0
      {
          ans= ans*10 + prevc;
          prevc=0;
      }
    else 
      if( (a%2==0 && b%2==1) || (a%2==1 && b%2==0)  ) //case2: one digit is 0 and other is 1
      {

          if(prevc == 1)
          {
              ans=ans*10 + 0;
          prevc=1;
          }

          else
          {
              ans=ans*10 + 1;
          prevc=0;
          }
      }
      else                                 //case 3 : both are 1
      {
          ans=ans*10 + prevc;
          prevc=1;
      }
      a/=10;
      b/=10;
    }
while (a>0)   //b finishes 
{
    if(prevc == 1)
    {
        if(a%2 == 1)
        {
        ans= ans*10 + 0;
        prevc=1;
        }
    else 
    {
        ans=ans*10 + 1;
        prevc=0;
    }
  }
  else
  {
      
          ans= ans*10 + (a%2);
      
  }
  a/=10;
}

while (b>0)    //a finishes
{
    if(prevc == 1)
    {
        if(b%2 == 1)
        {
        ans= ans*10 + 0;
        prevc=1;
        }
    else 
    {
        ans=ans*10 + 1;
        prevc=0;
    }
  }
  else
  {
      
          ans= ans*10 + (b%2);
      
  }
  b/=10;
}

if(prevc == 1)
{  
     ans= ans*10 +1;
}
ans=reverse(ans);

return ans;
}

int main()
{
    int a,b;
    cout<<"ENTER VALUES\n";
    cin>>a>>b;
    cout<<addbin(a,b);
    return 0;
}