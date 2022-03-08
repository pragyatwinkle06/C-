class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        int s=nums.size();
        long long sum=0;
      const int M =1e9+7;
       int g[M]={};
        for(int i=0;i<s;i++)
        {
            g[nums[i]]+=1 ;
        }
        
        for(int i=1;i<=M;i++)
        {
            if(k==0)
            {
                return sum;
            }
            if(g[i] == 0)
            {   sum+=i;
             k--;
            }
            else
                continue;
        }
       return 0;
    }
};