<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-bit-differences2937/1">Sum of bit differences</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array integers <strong>arr[]</strong>,&nbsp;containing <strong>n</strong> elements, find the sum of <strong>bit differences</strong> between all pairs of element in the array. <strong>Bit difference </strong>of a pair <strong>(x, y) </strong>is the count of different bits at the <strong>same positions</strong> in binary representations of <strong>x</strong> and <strong>y</strong>.<br><strong>For example</strong>, bit difference for <strong>2</strong> and <strong>7</strong> is <strong>2</strong>. Binary representation of 2 is 010 and 7 is 111 respectively and the first and last bits differ between the two numbers.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: (x, y) and (y, x) are considered two separate pairs.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 2
arr[] = {1, 2}
<strong>Output:</strong> 4
<strong>Explanation</strong>: All possible pairs of an array are (1, 1), (1, 2), (2, 1), (2, 2).
Sum of bit differences = 0 + 2 + 2 + 0
                       = 4</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 3 
arr[] = {1, 3, 5}
<strong>Output:</strong> 8
<strong>Explanation</strong>: 
All possible pairs of an array are (1, 1), (1, 3), (1, 5), (3, 1), (3, 3) (3, 5),(5, 1), (5, 3), (5, 5).
Sum of bit differences = 0 + 1 + 1 + 1 + 0 + 2 + 1 + 2 + 0 
                       = 8</span></pre>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Your Task:&nbsp;&nbsp;</strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;</span><strong style="font-size: 18px;">sumBitDifferences</strong><strong style="font-size: 18px;">()</strong><span style="font-size: 18px;">&nbsp;which takes the array&nbsp;</span><strong style="font-size: 18px;">arr[]</strong><span style="font-size: 18px;">&nbsp;and&nbsp;</span><strong style="font-size: 18px;">n</strong><strong style="font-size: 18px;">&nbsp;</strong><span style="font-size: 18px;">as inputs and&nbsp;</span><span style="font-size: 18px; white-space: normal;">return an integer that represents the sum of the bit differences between all possible pairs of elements in the array</span><span style="font-size: 18px;">.</span></span></p>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Expected Time Complexity:</strong><span style="font-size: 18px;"> O(n).</span><br><strong style="font-size: 18px;">Expected Auxiliary Space:</strong><span style="font-size: 18px;"> O(1).</span></span></p>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Constraints:</strong><br><span style="font-size: 18px;">1 &lt;= n &lt;= 10</span><sup style="font-size: 18px;">5</sup><br><span style="font-size: 18px;">1 &lt;= arr[i] &lt;= 10</span><sup style="font-size: 18px;">5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;