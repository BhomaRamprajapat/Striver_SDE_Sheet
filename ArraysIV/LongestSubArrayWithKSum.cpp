/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
     int prefixSum=0;
     unordered_map<int,int> mp;
     int ans=0;
     
     for(int i=0;i<n;i++)
     {
      prefixSum+=A[i];
      if(prefixSum==0)
       ans=i+1;
      
      if(mp.find(prefixSum)!=mp.end())
      {
       ans=max(ans,i-mp[prefixSum]);
       continue;
      }
      mp[prefixSum]=i;
     }
     
     return ans;
    }
};