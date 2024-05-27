<h2><a href="https://www.geeksforgeeks.org/problems/longest-subsequence-such-that-difference-between-adjacents-is-one4724/1">Longest subsequence-1</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an integer array <strong>a[]</strong> of size <strong>n</strong>, find the length of the longest subsequence such that the absolute difference between adjacent elements is 1.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong><br>n = 7
a[] = {10, 9, 4, 5, 4, 8, 6}
<strong>Output:</strong> <br>3
<strong>Explaination:</strong> <br>The three possible subsequences of length 3 are {10, 9, 8}, {4, 5, 4}, and {4, 5, 6}, where adjacent elements have a absolute difference of 1. No valid subsequence of greater length could be formed.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>n = 5
a[] = {1, 2, 3, 4, 5}
<strong>Output:</strong> <br>5
<strong>Explaination:</strong> <br>All the elements can be included in the valid subsequence.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input. Your task is to complete the function <strong>longestSubseq()</strong> which takes integer <strong>n</strong> and array <strong>a[]</strong> as input parameters and returns the length of the longest subsequence where the absolute difference of adjacent elements is 1.<br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)<br></span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10</span><sup><span style="font-size: 14.999999046325684px;">3</span></sup><br><span style="font-size: 18px;">1 ≤ a[i] ≤ 10</span><sup><span style="font-size: 14.999999046325684px;">3</span></sup></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;