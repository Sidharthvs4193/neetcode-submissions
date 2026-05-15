class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int a,b;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                b=st.top();st.pop();
                a=st.top();st.pop();
                st.push(a+b);
            }
            else if(tokens[i]=="-"){
                b=st.top();st.pop();
                a=st.top();st.pop();
                st.push(a-b);
            }
            else if(tokens[i]=="/"){
                b=st.top();st.pop();
                a=st.top();st.pop();
                st.push(a/b);
            }
            else if(tokens[i]=="*"){
                b=st.top();st.pop();
                a=st.top();st.pop();
                st.push(a*b);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
