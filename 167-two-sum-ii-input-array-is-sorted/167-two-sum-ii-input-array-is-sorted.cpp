class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1=0;
        int index2 = numbers.size()-1;
        while(index1<index2)
        {
            int sum = numbers[index1] + numbers[index2];
            
            if(sum == target)
            {
                vector<int> ans{index1+1,index2+1};
                return ans;
            }
            if(sum>target)
            {
                index2--;
            }
            if(sum<target)
            {
                index1++;
            }
        }
        return numbers;
    }
};