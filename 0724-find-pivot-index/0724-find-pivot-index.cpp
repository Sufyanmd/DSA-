class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long sum = 0;
        long Lsum = 0;
        for(int i=0; i < nums.size(); i++){
            sum = sum + nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            if(Lsum == sum - nums[i] - Lsum) return i;
            else{
                Lsum = Lsum + nums[i];
            }
        }
        return -1;
    }
};