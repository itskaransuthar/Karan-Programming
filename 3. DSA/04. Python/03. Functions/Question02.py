# Leap Year
import math
class Solution:
    def isLeap (self, N):
        # code here
        if(N % 400 == 0 or (N % 100 != 0 and N % 4 == 0)):
            return 1
            
        else: 
            return 0

if __name__ == '__main__':
    year = int(input("Enter the year: "))

    obj = Solution()

    if(obj.isLeap(year)):
        print(f"\n{year} is a leap year")
    else:
        print(f"\n{year} is not a leap year")