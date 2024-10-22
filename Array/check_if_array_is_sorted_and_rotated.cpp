class Solution {
public:
    bool check(vector<int>& nums) {
            int track=0;
           for(int i=0;i<=nums.size()-1;i++){
        if(nums[i]>nums[(i+1)%nums.size()] ) track++; // (i + 1) % n ensures that you also compare the last element with the first
           }
            if(track==0 || track==1) return true;
            else return false;
    }
};