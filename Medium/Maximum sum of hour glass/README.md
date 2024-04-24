<h2><a href="https://www.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1">Maximum sum of hour glass</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two integers <strong>n</strong>, <strong>m</strong> and a 2D matrix <strong>mat</strong> of dimensions <strong>nxm</strong>, the task is to find the <strong>maximum sum</strong> of an <strong>hourglass</strong>.<br>An <strong>hourglass</strong> is defined as a part of the matrix with the following form:</span></p>
<p><span style="font-size: 18px;"><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/705187/Web/Other/blobid1_1710860182.png" width="209" height="213"></span></p>
<p><span style="font-size: 18px;">Return <strong>-1</strong> if any hourglass is <strong>not found</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 3, m = 3
mat = [[1, 2, 3],<br>       [4, 5, 6],<br>       [7, 8, 9]]
<strong>Output:</strong>
35
<strong>Explanation:</strong>
There is only one hour glass which is
1 2 3
  5
7 8 9   and its sum is 35.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 2, m = 3
mat = [[1, 2, 3],<br>       [4, 5, 6]]
<strong>Output:</strong>
-1
<strong>Explanation:</strong>
There are no hour glasses in this matrix.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>findMaxSum()</strong> which takes the two integers <strong>n</strong>, <strong>m</strong>, and the 2D matrix <strong>mat</strong> as input parameters and returns the maximum sum of an hourglass in the matrix. If there are no hourglasses, it returns -1.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n*m)<br><strong>Expected Auxillary Space: </strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong>1 &lt;= n &lt;= 150<strong><br></strong></span><span style="font-size: 18px;">3 &lt;= m &lt;= 150<br>0 &lt;= mat[i][j] &lt;= 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;