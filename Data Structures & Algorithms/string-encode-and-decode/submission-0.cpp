class Solution {
public:

    string encode(vector<string>& strs) {
        string result="";
        for (string s:strs){
            result+=to_string(s.size())+"#"+s;
        }
        return result;
    }

    vector<string> decode(string s) {
        int c,i=0,j=0;
        vector<string> result;
        while (j<s.size()){
            while (s[j]!='#')j++;
            c=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+c;
            result.push_back(s.substr(i,c));
            i=j;
        }
        return result;
    }
};
