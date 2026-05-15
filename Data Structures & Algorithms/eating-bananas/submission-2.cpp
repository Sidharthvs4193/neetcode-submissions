class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1;
        for(int num:piles)r=max(r,num);
        int k=r;
        while(l<=r){
            int m=(l+r)/2;
            int c=0;
            for(int num:piles){
                c+=((num+m-1)/m);
            }
            if(c<=h){
                k=min(k,m);
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return k;
    }
};
