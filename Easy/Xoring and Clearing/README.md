<h2><a href="https://www.geeksforgeeks.org/problems/xoring-and-clearing/1">Xoring and Clearing</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array&nbsp;<strong>arr[]</strong>&nbsp;of<strong>&nbsp;size n</strong>. You need to do the following:</span></p>
<ol>
<li><span style="font-size: 18px;">You need to calculate the&nbsp;<strong>bitwise XOR</strong>&nbsp;of each element in the array with its&nbsp;<strong>corresponding index</strong>&nbsp;(indices start from 0).</span></li>
<li><span style="font-size: 18px;">After step1,&nbsp;<strong>print the array.</strong></span></li>
<li><span style="font-size: 18px;">Now,<strong>&nbsp;set all the elements of arr[] to zero</strong>.</span></li>
<li><span style="font-size: 18px;">Now,&nbsp;<strong>print arr[].</strong></span></li>
</ol>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 10
arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
<strong>Output:
</strong>1 3 1 7 1 3 1 15 1 3
0 0 0 0 0 0 0 0 0 0
<strong>Explanation:
</strong>First we take xor of every element with
their indices, like (1xor0), (2xor1), (3xor2), (4xor3) and so on.
Now print the resultant array
Now set all the elements of array to zero
Now print the resultant array</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4
arr[] = {10, 20, 30, 40}
<strong>Output:
</strong>10 21 28 43
0 0 0 0
<strong>Explanation:
</strong>First we take xor of every element with
their indices, like (1xor0), (2xor1), (3xor2).
Now print the resultant array
Now set all the elements of array to zero
Now print the resultant array</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Since this is a function problem, you don't need to take any input. Just complete the provided functions.&nbsp;In a new line, print the&nbsp;<strong>output</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 1000<br>1 &lt;= arr[i] &lt;= 1000</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;