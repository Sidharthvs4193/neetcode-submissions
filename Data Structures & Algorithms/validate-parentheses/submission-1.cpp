class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
        mp['(']=')';
        mp['{']='}';
        mp['[']=']';
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(mp.count(s[i])){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(mp[st.top()]==s[i]){
                    st.pop();
                    }
                    else{
                        return false;
                    }
                }
                
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};
