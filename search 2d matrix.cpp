class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)  return false;
        int n=matrix.size();
        int m=matrix[0].size();
        int high=(n*m)-1,low=0,mid;
        while(low<=high)
        {
         mid=(low+(high-low)/2);
        if(matrix[mid/m][mid%m]==target)
        {
            return true;
        }
        if(matrix[mid/m][mid%m]<target)
        {
            low=mid+1;
        }
            else
                high=mid-1;
        }
        return false;
    }
};
