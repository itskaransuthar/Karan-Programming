// Fibonacci Series

class Solution {
public:
    int fib(int n) 
    {
        int fVal = 0, sVal = 1, tVal;

        for(int i = 1; i <= n - 1; i++)
        {
            tVal = fVal + sVal;

            fVal = sVal;
            sVal = tVal;
        }

        return tVal;

        /*
        /// Base Case
        if(n == 0 or n == 1)
            return n;

        /// Recursion
        return fib(n - 1) + fib(n - 2);
        */
    }
};