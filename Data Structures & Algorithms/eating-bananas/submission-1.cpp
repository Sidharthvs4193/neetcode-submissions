class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=0;
        for(int num:piles){
            if(num>high)high=num;
        }
        int min=high;
        while(low<=high){
            int m=(low+high)/2;
            int c=0;
            for(int i=0;i<piles.size();i++){
                c+=(piles[i]+m-1)/m;
            }
            if(c>h)low=m+1;
            else{
                if(m<min)min=m;
                high=m-1;
            }
        }
        return min;
    }
};
