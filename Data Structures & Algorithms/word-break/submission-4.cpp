class Solution {
public:
    unordered_map<int,bool> dp;
    bool wordBreak(string s, vector<string>& wordDict) {
        dp[s.length()]=true;
        unordered_set<string> check(wordDict.begin(),wordDict.end());
        return dfs(s,check,0);
    }
    bool dfs(string s,unordered_set<string>& check,int i){
        if (dp.find(i)!=dp.end())return dp[i];
        for(int j=i;j<s.size();j++){
            if(check.find(s.substr(i,j-i+1))!=check.end()){
                if(dfs(s,check,j+1)){
                    dp[i]=true;
                    return true;
                }            
            }
        }
        dp[i]=false;
        return false;
    }
};
