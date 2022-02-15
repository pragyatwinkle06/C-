#include<bits/stdc++.h>

using namespace std;

int getbit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

int setbit(int n, int pos)
{
    return (n | (1<<pos));
} 

int clear(int n, int pos)
{
    int mask=~(1<<pos);
    return (mask & n);
}
int updatebit(int n, int pos, int value)
{
  int mask= ~(1<<pos);
  n= (n & mask);
  return (n | (value<<pos));
}


 int main()
 {      
     int n,pos,value;
     cin>>n>>pos;
     cin>>value;
     cout<<getbit(n,pos);
     cout<<setbit(n,pos);
     cout<<clear(n,pos);
     cout<<updatebit(n,pos,value);
     return 0;
 }