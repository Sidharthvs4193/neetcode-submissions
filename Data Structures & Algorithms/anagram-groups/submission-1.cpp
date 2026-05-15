class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,int> check;
        int c=0;
        for (string str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            if(check.count(temp)){
                result[check[temp]].push_back(str);
            }
            else{
                check.insert({temp,c});
                c++;
                result.push_back({str});
            }
        }
        return result;
    }
};
