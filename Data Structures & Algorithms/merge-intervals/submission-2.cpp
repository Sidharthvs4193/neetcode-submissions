class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int max_val=0;
        for(auto& val:intervals)max_val=max(max_val,val[0]);
        vector<int> mp(max_val+1,0);
        for(auto& val:intervals){
            mp[val[0]]=max(mp[val[0]],val[1]+1);
        }
        vector<vector<int>> res;
        int end=-1;
        int start=-1;
        for(int i=0;i<mp.size();i++){
            if(mp[i]!=0){
                if(start==-1)start=i;
                end=max(end,mp[i]-1);
            }
            if(end==i){
                res.push_back({start,end});
                start=-1;
                end=-1;
            }
        }
        if(start!=-1)res.push_back({start,end});
        return res;
    }
};
