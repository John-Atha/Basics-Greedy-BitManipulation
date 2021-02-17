import math
class Solution:
    def isDigitSumPalindrome(self,N):
            # 3235 -> [3,2,3,5]
        s = list(str(N))
        sum = 0
        for c in s:
            sum = sum + int(c)
        # 5225 -> [5,2,2,5]
        l = list(str(sum))
        length=len(l)
        if (length==2 and l[0]!=l[1]):
            return 0
        limit=0
        if length%2==0:
            limit = math.floor((length-1)/2)
        else:
            limit = math.floor((length-2)/2)
            
        for i in range(limit):
            if l[i]!=l[length-1-i]:
                return 0
        return 1