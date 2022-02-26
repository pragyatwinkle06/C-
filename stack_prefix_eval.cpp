//Prefix Evaluation 

#include<bits/stdc++.h>
using namespace std;
int prefix_eval(string s)
{    
    int n=s.size();
    stack<int> st;
    for(int i=n-1;i>=0 ;i--)
    {
        if(s[i] >= '0' && s[i]<= '9')
        st.push(s[i] - '0');
        else
        {
            int op1=st.top();
            st.pop();
        int op2=st.top();
        st.pop();
        int res=0;

        switch(s[i])
        {
            case '+':  res= op1+ op2;
                        st.push(res);
                        break;
            case '-': res= op1- op2;
                        st.push(res);
                        break;
            case '*': res= op1* op2;
                        st.push(res);
                        break;
              case '/': res= op1/ op2;
                            st.push(res);
                        break; 
             case '^': res= pow(op1, op2);
                        st.push(res);
                        break;          

        }
        }

    }
    return st.top();

}

int main()
{
int x=prefix_eval("-+7*45+20");
    cout<<x;
    return 0;

}