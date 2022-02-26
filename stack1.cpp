#include<bits/stdc++.h>
using namespace std;

#define n 100
class Stack{
    int *arr;
    int top;
    public:
    Stack()
    {
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        if(top== n-1)
       { cout<<"OVERFLOW";
        return;
       }
       else{
           arr[++top]=x;

       }
        

    }


    void pop()
    {
        if(top == -1)
        {
            cout<<"UNDERFLOW";
            return ;
        }
        else
        {
            top--;
        }
    }

    int Top()
    {   
        if(top > -1 && top < n)
        return arr[top];

        else
       { cout<<"not possible";
        return -1 ;
       }
    }

    bool Empty()
    {
        if(top == -1 )
        return true;
        else 
        return false;
    }
};
int main()
{
  Stack st;
    st.push(10);
     st.push(11);
      st.push(15);
       st.push(8);
        st.push(9);
        cout<<st.Top()<<" ";
         st.pop();
         st.pop();

 cout<<st.Top()<<" ";
 cout<<st.Empty()<<" ";
    return 0;
}