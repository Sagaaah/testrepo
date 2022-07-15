class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int high=n-1;
        int low=0;
        int mid=0;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[mid++],nums[low++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};
