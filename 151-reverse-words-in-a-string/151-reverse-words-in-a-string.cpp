class Solution {
public:
    string reverseWords(string s) {
    stack<string> stk;
    
        string ans;
    int n = s.length();
        
    if(n==0) 
        return s;
    
    for(int i =0 ; i< n; i++){
        string temp; 
        if(s[i]==' ')
            continue;
        
        while(i<n && s[i] != ' ')
        {
            temp += s[i++];
        }
          stk.push(temp);
    }
    while(!stk.empty())
    {
        ans =ans + stk.top(); 
        stk.pop();
        if(!stk.empty())
            ans = ans + ' ';
    }
    return ans;
    }
};

        
        
