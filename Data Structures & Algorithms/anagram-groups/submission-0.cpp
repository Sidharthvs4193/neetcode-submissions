class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        string temp;
        vector<vector<string>> result;
        unordered_map<string,int> mp;
        int c=0;
        for (string i:strs){
            temp=i;
            sort(temp.begin(),temp.end());
            if (mp.count(temp)){
                result[mp[temp]].push_back(i);
            }
            else{
                mp.insert({temp,c});
                result.push_back({i});
                c++;
            }
        }
        return result;
    }
};
