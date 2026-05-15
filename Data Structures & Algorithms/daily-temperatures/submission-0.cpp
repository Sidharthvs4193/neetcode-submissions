class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res;
        int flag;
        for(int i=0;i<temperatures.size();i++){
            flag=0;
            for(int j=i+1;j<temperatures.size();j++){
                if(temperatures[j]>temperatures[i]){
                    res.push_back(j-i);
                    flag=1;
                    break;
                }
            }
            if (flag==0)res.push_back(0);
        }
        return res;
    }
};
