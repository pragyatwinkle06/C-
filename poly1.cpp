//function overloading 

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void f()
    {
        cout<<"function with 0 argument\n";
    }

    void f(int a)
    {
        cout<<"function with int  argument\n";
    }

    void f(double b)
    {
        cout<<"function with double argument\n";
    }
};
int main()
{
A a;
a.f();
a.f(3);
a.f(6.9);
return 0;
}