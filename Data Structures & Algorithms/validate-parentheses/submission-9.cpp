class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> check;
        check.insert({')','('});
        check.insert({']','['});
        check.insert({'}','{'});
        stack<char> st;
        for(char c:s){
            if(check.count(c)){
                if(!st.empty() && st.top()==check[c])st.pop();
                else{
                    return false;
                }
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};
