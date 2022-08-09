class Solution {
public:
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int c = 0;
    int n = nums.size();
    
    if(n==1)
        return nums[0];
    for(int i=0; i<n-1; i++)
    {
        if(nums[i]==nums[i+1])
        {
            c++;
         if(c>= n/2)
         {
         return nums[i];
         }
       }
    }
    return 0;
  }
};
    