#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,r;
	    cin>>n>>r;
	    
	    vector<long long > a(n);
	    vector<long long> b(n);
	    vector<pair<long long,long long>> eff;
	 long long p,ans=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	       
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	     
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        p=a[i]-b[i];
	        eff.push_back({p,a[i]});
	    }
	    
	    sort(eff.begin(),eff.end());
	  
	  for(auto cur:eff)
	  {
	      const long long ef_cost=cur.first , original_cost=cur.second, cash_back=original_cost-ef_cost;
	      
	      if(r< original_cost) continue;
	      
	      r-=original_cost;
	      ans+=1;
	      
	      ans+=r/ef_cost;
	      
	      r%=ef_cost;
	      r+=cash_back;
	  }
	  
	  cout<<ans<<endl;
	}
	return 0;
}
