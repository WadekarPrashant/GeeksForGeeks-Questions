<h2><a href="https://www.geeksforgeeks.org/problems/peak-element/1">Peak element</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an <strong>0-indexed</strong> array of integers <strong>arr[] </strong>of size <strong>n</strong>, find its peak element. An element is considered to be peak if it's value is <strong>greater than or equal</strong> to the values of its adjacent elements (if they exist).</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> The output will be&nbsp;<strong>1</strong> if the index returned by your function is correct; otherwise, it will be <strong>0</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: 
</span></strong><span style="font-size: 18px;">n = 3
arr[] = {1, 2, 3}<br></span><span style="font-size: 18px;">Peak element's index:<strong> </strong>2
<strong>Output:</strong> <br>1
<strong>Explanation:</strong> <br>If the index returned is 2, then the output printed will be 1. Since arr[2] = 3 is greater than its </span><span style="font-size: 14pt;">adjacent elements, and there is no element after it, we can consider it as a peak element. No other index satisfies the same property.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 7
arr[] = {1, 1, 1, 2, 1, 1, 1}</span><span style="font-size: 18px;">
<strong>Output: <br></strong>1<strong>
Explanation: <br></strong></span><span style="font-size: 18px;">In this case there are 5 peak elements with indices as {0,1,3,5,6}. Returning any of them will give you correct answer.</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't have to read&nbsp;input or print anything. Complete the function <strong>peakElement</strong>() which takes the array <strong>arr[]</strong> and its size <strong>n</strong> as input parameters and return the index of the peak element.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O( log(n) ).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Visa</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;