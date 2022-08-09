class Solution {
public:
    int trap(vector<int>& h) {
         int prevMax[h.size()], nextMax[h.size()], tc = 0;
        prevMax[0] = nextMax[h.size()-1] = 0;
        for(int i=1;i<h.size();i++){
            prevMax[i] = max(prevMax[i-1], h[i-1]);
        }
        for(int i=h.size()-2;i>=0;i--){
            nextMax[i] = max(nextMax[i+1], h[i+1]);
        }
        for(int i=0;i<h.size();i++){
            int trap = min(prevMax[i], nextMax[i]);
            if(trap > h[i]){
                tc = tc + trap-h[i];
            }
        }
        return tc;
    }
};
    