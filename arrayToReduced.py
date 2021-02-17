class Solution:

	def convert(self,arr, n):
		# temp: copy of arr but sorted
		temp = []
		for i in arr:
		    temp.append(i)
		temp.sort()
		# d: dictionary with pairs= number: its index on sorted
		d = {}
		for i in range(0, n):
		    d[temp[i]]=i
        for i in range(0, n):
            arr[i]=d[arr[i]]