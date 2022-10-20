class Solution {
public:
    void combination(int index, string digits, string output, vector<string>& ans, string letter[])
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0';
        string map = letter[number];
        for(int i=0;i<map.length();i++)
        {
            output.push_back(map[i]);
            combination(index+1,digits,output,ans,letter);
            output.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0)
        {
            return ans;
        }
        string output = "";
        string letter[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index = 0;
        combination(index,digits,output,ans,letter);
        return ans;
    }
};