class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for(string str:strs){
            string s=to_string(str.size());
            result+=s+"#"+str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int l=0;
        while(l<s.size()){
            int r=l;
            while(s[r]!='#')r++;
                int c=stoi(s.substr(l,r-l));
                l=r+1;
                string tmp=s.substr(l,c);
                result.push_back(tmp);
                l=l+c;
        }
        return result;
    }
};
