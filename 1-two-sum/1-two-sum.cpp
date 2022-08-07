class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size()-1;
        vector<pair<int,int> >sum;
        for(int i=0;i<nums.size();i++) {
            sum.push_back({nums[i],i});
        }
        sort(sum.begin(),sum.end());

        int i=0;
        int j=n;  
        vector<int> ans;
        while(j>i){
            if((sum[i].first+sum[j].first)==target)
			{
                ans.push_back(sum[i].second);
                ans.push_back(sum[j].second);
                break;
            }
            if((sum[i].first+sum[j].first)>target){
                    j--;
            }
            else{
                    i++;
            }
            
        }
         return ans;
    }
};