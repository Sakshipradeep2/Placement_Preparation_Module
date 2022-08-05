class Solution {
public:
    bool isValid(string s) {
     stack<int>stk;
		bool flag = false;

   for(int i=0; i<s.size(); i++)
    {
	   if(s[i] == '(' || s[i] == '[' || s[i] == '{') stk.push(s[i]);        
		else
            {
			if(stk.size()==0) 
            return false;          
			char c = stk.top();                 
			stk.pop();
	if((s[i] == ')' && c=='(') || (s[i] == ']' && c=='[') || (s[i] == '}' && c=='{')) 
			flag = true;
			else {
				flag = false;
				break;
				}
			}
		}
		if(flag == true && stk.size()==0) return true;
		return false;
	}
};
    
    