class Solution {
public:
    
    vector<vector<int>> ans;
    
    void helperSubsets(vector<int>& nums,int i, vector<int> temp)
    {
        
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        helperSubsets(nums,i+1,temp);
        temp.push_back(nums[i]);
        helperSubsets(nums,i+1,temp);
        
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<int> temp;
        helperSubsets(nums,0,temp);
        return ans;
    }
};