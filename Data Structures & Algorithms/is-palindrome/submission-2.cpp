class Solution {
public:
    bool isPalindrome(string s) {
      string temp="";
      for(char c:s){
        if(isalnum(c)){
            c=tolower(c);
            temp=temp+c;
        }
      }
      int l=0, r=temp.size()-1;
      while (l<r){
        if(temp[l]!=temp[r])return false;
        l++;r--;
      }  
      return true;
    }
};
