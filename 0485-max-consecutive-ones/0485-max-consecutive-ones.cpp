class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int times =0;
       int maxtimes =0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            times++;
        }else{
            maxtimes = max(maxtimes,times);
            times=0;
        }
       }
       maxtimes = max(maxtimes,times);
       return maxtimes;
    }
};