class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for(string str:strs){
            result=result+to_string(str.size())+"#"+str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int l=0;
        while (l<s.size()){
            int r=l;
            while (s[r]!='#')r++;
            int count=stoi(s.substr(l,r-l));
            l=r+1;
            r=l+count;
            result.push_back(s.substr(l,count));
            l=r;
        }     
        return result;
    }
};
