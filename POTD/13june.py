class Solution:
	def kLargest(self,arr, n, k):
		arr.sort(reverse=True)
		return arr[:k]
