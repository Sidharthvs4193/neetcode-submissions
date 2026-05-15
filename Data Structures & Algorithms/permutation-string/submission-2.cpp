class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        int l=0;
        sort(s1.begin(),s1.end());
        for(int r=0;r<=s2.size()-s1.size();r++){
            string temp=s2.substr(l,s1.size());
            sort(temp.begin(),temp.end());
            if(temp==s1)return true;
            l++;
        }
        return false;
    }
};
