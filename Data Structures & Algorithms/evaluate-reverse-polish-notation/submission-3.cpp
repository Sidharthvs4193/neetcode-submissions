class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int a,b,res;
        for(string ch:tokens){
            if(ch!="+" && ch!="-" && ch!="*" && ch!="/"){
                a=stoi(ch);
                st.push(a);
            }
            else{
                b=st.top();st.pop();
                a=st.top();st.pop();
                if(ch=="+"){res=a+b;st.push(res);}
                if(ch=="-"){res=a-b;st.push(res);}
                if(ch=="*"){res=a*b;st.push(res);}
                if(ch=="/"){res=a/b;st.push(res);}
            }
        }
        return st.top();
    }
};
