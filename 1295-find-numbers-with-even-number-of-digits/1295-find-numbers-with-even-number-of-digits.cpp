class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even_num = 0;

        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] >= 10 && nums[i] <= 99) || (nums[i] >= 1000 && nums[i] <= 9999) || (nums[i] == 100000)) 
            {
                even_num++;
            }
        }
        return even_num;
    }
};



// int findNumbers(vector<int>& nums) {
//         int digit = 0;
//         int even = 0;
//         for(int i=0;i< nums.size();i++){
//             for(int j=0;nums[i]>0;j++){
//                 nums[i] = nums[i]%10;
//                 digit++;
//             }
//             if(digit%2) even++;
//         }
//         return even;
//     }