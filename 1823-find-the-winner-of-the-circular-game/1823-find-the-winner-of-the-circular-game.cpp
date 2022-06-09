class Solution {
public:
    int w(int n,int k)
    {
        if(n==1) return 0;
        
        return (w(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        // if(n==1)
        //     return 1;
        // int x = findTheWinner(n-1,x);
        // int y = (x+k-1)%n+1;
        // return y;
        
        return w(n,k)+1;
    }
};