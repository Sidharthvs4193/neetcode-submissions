class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> check;
        check.insert({')','('});
        check.insert({']','['});
        check.insert({'}','{'});
        stack<char> st;
        for(char c:s){
            if(!check.count(c))st.push(c);
            else{
                if(st.empty())return false;
                else if(st.top()!=check[c])return false;
                else{
                    st.pop();
                }
            }
        }
        if(st.empty())return true;
        else{
            return false;
        }
    }
};
