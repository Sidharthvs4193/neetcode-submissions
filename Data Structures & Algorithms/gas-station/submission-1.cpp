class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumg=0,sumc=0;
        for(int g:gas)sumg+=g;
        for(int c:cost)sumc+=c;
        if(sumc>sumg)return -1;
        int total=0,res=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i]-cost[i];
            if(total<0){
                total=0;
                res=i+1;
            }
        }
        return res;
    }
};
