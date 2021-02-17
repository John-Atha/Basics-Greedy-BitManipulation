import math
class Solution:
	def isPlaindrome(self, S):
		l = list(S)
		length=len(l)
        if (length==2 and l[0]!=l[1]):
            return 0
        limit=0
        if length%2==0:
            limit = math.floor((length)/2)
        else:
            limit = math.floor((length-1)/2)
        for i in range(limit):
            if l[i]!=l[length-1-i]:
                return 0
        return 1