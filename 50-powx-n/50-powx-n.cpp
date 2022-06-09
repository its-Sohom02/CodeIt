class Solution {
public:
    double myPow(double x, int n) {

        // if(n==1) return x;
        // if(n==-1) return 1/x;
        double ans = 1;
        if(n==0) return 1;
        
        if(n>0){
        
        if(n%2==0) ans = myPow(x*x,n/2);
        else{
             ans = myPow(x*x,n/2);
             ans = ans*x;
            }
        }
        else{
            
            if(n%2 == 0) ans = myPow((1/x)*(1/x),n/2*(-1));
            
            else{
                ans = myPow((1/x)*(1/x),n/2*(-1));
                ans = ans * (1/x);
            }
        }
        return ans;
    }
};