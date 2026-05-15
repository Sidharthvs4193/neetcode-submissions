class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp;
        mp['}']='{';
        mp[']']='[';
        mp[')']='(';
        for(char ch:s){
            if (mp.count(ch)){
                if(st.empty())return false;
                else if (st.top()==mp[ch])st.pop();
                else{return false;}
            }
            else{st.push(ch);}
        }
        if(st.empty())return true;
        return false;
    }
};
