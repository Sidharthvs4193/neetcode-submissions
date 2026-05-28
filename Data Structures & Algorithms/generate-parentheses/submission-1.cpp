class Solution {
public:
    vector<string> res;
    vector<string> generateParenthesis(int n) {
        string stack;
        dfs(n,0,0,stack);
        return res;
    }
    void dfs(int n,int open,int closed,string& stack){
        if(open==closed and open==n){
            res.push_back(stack);
            return;
        }
        if(open<n){
            stack+="(";
            dfs(n,open+1,closed,stack);
            stack.pop_back();
        }
        if(closed<open){
            stack+=")";
            dfs(n,open,closed+1,stack);
            stack.pop_back();
        }
    }
};
