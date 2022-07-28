class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast,slow;
        fast=slow=nums[0];
       do
       {
       slow=nums[slow];
           fast=nums[nums[fast]];
       }while(slow!=fast);
           fast=nums[0];
        while(fast!=slow)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
           
    }
};
