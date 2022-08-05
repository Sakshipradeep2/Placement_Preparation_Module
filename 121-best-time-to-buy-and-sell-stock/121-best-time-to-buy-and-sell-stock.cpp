class Solution {
public:
    int maxProfit(vector<int>& p) {
      int min_p=INT_MAX;
        int max_p=0;
        for(int i=0;i<p.size();i++)
        {
           min_p=min(min_p, p[i]);
           max_p=max(max_p, p[i]-min_p);
        }
        return max_p;   
    }
};