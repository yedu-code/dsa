class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            int index = -1;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    index = j;
                    break;
                }
            }
            int maxNum = -1;
            for(int j=index+1;j<nums2.size();j++){
                if(nums2[j]>nums2[index]){
                    maxNum = nums2[j];
                    break;
                }
            }

            v.push_back(maxNum);

        }
        return v;
    }
};