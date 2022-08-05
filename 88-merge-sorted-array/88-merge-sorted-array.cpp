class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         for(int i=0;i<m+n;i++)
        {
            if(i<m)
                nums1[i]=nums1[i];
            else
                nums1[i]=nums2[i-m];
        }
        
        sort(nums1.begin(),nums1.end());
    }
};
