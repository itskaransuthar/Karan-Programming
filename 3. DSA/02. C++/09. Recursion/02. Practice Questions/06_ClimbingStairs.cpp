// Climbing Stairs

class Solution {
public:
    int climbStairs(int n)
    {
        if(n == 1 or n == 2)
            return n;

        int fVal = 1, sVal = 2, tVal;

        for(int i = 1; i <= n - 2; i++)
        {
            tVal = fVal + sVal;
            fVal = sVal;
            sVal = tVal;
        }

        return tVal;
    }
    
    /*
    int climbStairs(int n) 
    {
        if(n == 1 or n == 2)
            return n;
        
        int a = climbStairs(n - 1);
        int b = climbStairs(n - 2);
        return a + b;
    }
    */
};