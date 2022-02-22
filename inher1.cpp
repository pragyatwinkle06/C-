#include<bits/stdc++.h>

using namespace std;

class A{
    public:
    void Afunc(){
        cout<<"function A\n";
    }
};

class B: public A{
    public:
    void Bfunc()
    {
         cout<<"function B\n";
    }
};

class C:public B{
    public:
    
};

int main()
{     C c;
c.Afunc();
c.Bfunc();
return 0;
}