class Solution {
public:
    bool isPalindrome(int x) {
        long long int digit,rem=0;
        int num = x;
        
        if(x < 0) return false;
        
        while(x!=0) {
            digit = x % 10;
            rem = (rem * 10) + digit;
            x = x / 10;
        }
        
        if(rem == num) return true;
        else return false;
    }
};