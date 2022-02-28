#include<bits/stdc++.h>
const int N =1e3+10;
int graph[N][N];
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;
    //all edges input   // continuous limit= 1e7 or 1e8
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;
    }
    return 0;
}