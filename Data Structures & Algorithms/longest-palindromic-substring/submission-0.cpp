class Solution {
public:
    string longestPalindrome(string s) {
        int index=0,len=0;
        int n=s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,0));
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(s[i]==s[j] and (j-i<=2 or dp[i+1][j-1])){
                    dp[i][j]=true;
                    if(len<j-i+1){
                        len=j-i+1;
                        index=i;
                    }
                }
            }
        }
        return s.substr(index,len);
    }
};
