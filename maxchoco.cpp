//Maximum chocolate problem 
#include<bits/stdc++.h>

using namespace std;
int maxchoco(int rs)
{
    int c=0;
    int wr=0;
    rs=rs-3;
    c=3;
    wr=3;
    while(rs>0)
    {

         if(wr== 3)
        {
           c= c+1;
        wr=1;
        }
        rs=rs-2;
        c=c+2;
        wr=wr+2;
       
    }
    if(rs == 0 && wr==3)
    {
        c=c+1;
    wr=1;
    }

    return c;
}


int main()
{
   int rs;
   cout<<"Enter rup\n";
   cin>>rs;

cout<<"Max choco\t"<<maxchoco(rs);
return 0;

}
