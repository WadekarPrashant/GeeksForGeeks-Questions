class Solution:
 def totalSubarrays(self, first, second, arr):
     zero = 0
     one = 1
     solution = zero
     for elif in range(first):
        ans = arr[elif]
        if ans == second:
            solution = solution + one
        for j in range(elif+one,first):
            ans = ans & arr[j]
            if ans == second:
                solution = solution + one
            if ans < second:
                break
     return solution