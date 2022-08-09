class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& x) {
        if(x.size()==0)
            return {};
		
		vector<vector<int>> ans;
		sort(x.begin(),x.end());
		
		int j = 0;
		ans.push_back(x[0]);
		
		for(int i = 1 ; i< x.size(); i++)
        {	
			if(ans[j][1] >= x[i][0])
				ans[j][1] = max(ans[j][1],x[i][1]);
			else
            {
				j++;
				ans.push_back(x[i]);
			}
			
		}
		return ans;
	}
};