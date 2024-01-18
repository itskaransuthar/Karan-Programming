# Add Digits

class Solution:
    def addDigits(self, num: int) -> int:
        result = 0
        while(num != 0):
            result += num % 10
            num //= 10

            if(num == 0 and result >= 10):
                num = result
                result = 0
        
        return result
    
num = int(input("Enter number: "))

obj = Solution()
answer = obj.addDigits(num)

print(f"Sum of digits: {answer}")