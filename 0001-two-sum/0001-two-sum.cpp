class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]+ nums[j] ==target && i!=j){
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
            if(arr.size()==2){
                break;
            }
        }
        return arr;
    }
};