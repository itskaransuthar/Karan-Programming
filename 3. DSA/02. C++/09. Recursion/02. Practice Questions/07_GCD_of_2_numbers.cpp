// GCD of two numbers

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    // Base Condition
	    if(B == 0)
	        return A;
	    
	    // Recursion
	    return gcd(B, A % B);
	    
	    /*
	    while(A % B)
	    {
	        int rem = A % B;
	        
	        A = B;
	        B = rem;
	    }
	    
	    return B;
	    */
	} 
};