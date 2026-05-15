class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> check;
        vector<vector<string>> result;
        int index=0;
        for(string str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            if(check.count(temp)){
                result[check[temp]].push_back(str);
            }
            else{
                result.push_back({str});
                check.insert({temp,index});
                index++;
            }
        }
        return result;
    }
};
