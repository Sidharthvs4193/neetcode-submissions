class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        sort(s1.begin(),s1.end());
        for(int l=0;l<=s2.size()-s1.size();l++){
            string tmp=s2.substr(l,s1.size());
            sort(tmp.begin(),tmp.end());
            if(s1==tmp)return true;
        }
        return false;
    }
};
