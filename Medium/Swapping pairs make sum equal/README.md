<h2><a href="https://www.geeksforgeeks.org/problems/swapping-pairs-make-sum-equal4142/1">Swapping pairs make sum equal</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two arrays of integers <strong>a[]</strong> and <strong>b[]</strong> of size <strong>n</strong> and <strong>m</strong>, the task is to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: <strong>Return 1</strong> if there exists any such pair otherwise <strong>return -1</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 6, m = 4, a[] = {4, 1, 2, 1, 1, 2}, b[] = (3, 6, 3, 3)
<strong>Output: </strong>1
<strong>Explanation</strong>: Sum of elements in a[] = 11, Sum of elements in b[] = 15, To get same sum from both arrays, we can swap following values: 1 from a[] and 3 from b[]</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4, m = 4, a[] = {5, 7, 4, 6}, b[] = {1, 2, 3, 8}
<strong>Output:</strong> 1
<strong>Explanation</strong>: We can swap 6 from array a[] and 2 from array b[]</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(mlogm+nlogn).<br><strong>Expected Auxiliary Space:</strong> O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 10<sup>6<br></sup></span><span style="font-size: 18px;">0 &lt;= a[i], b[i] &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;