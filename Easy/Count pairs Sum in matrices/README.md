<h2><a href="https://www.geeksforgeeks.org/problems/count-pairs-sum-in-matrices4332/1">Count pairs Sum in matrices</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two <strong>sorted</strong> matrices <strong>mat1</strong> and <strong>mat2</strong> of size <strong>n</strong><strong>&nbsp;x n</strong> of elements. Each matrix contains numbers arranged in <strong>strictly</strong> <strong>ascending order</strong>, with <strong>each row sorted </strong>from <strong>left to right</strong>, and the last element of a row being <strong>smaller </strong>than the first element of the next row. You're given a target value, <strong>x,</strong> your task is to find and <strong>count all pairs</strong> <strong>{a, b} </strong>such that <strong>a </strong>is from <strong>mat1 </strong>and <strong>b </strong>is from <strong>mat2 </strong>where sum of <strong>a </strong>and <strong>b</strong> is equal to <strong>x</strong>.<br></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 3, x = 21
mat1 = {{1, 5, 6},
        {8, 10, 11},
        {15, 16, 18}}
mat2 = {{2, 4, 7},
        {9, 10, 12},
        {13, 16, 20}}
<strong>OUTPUT: </strong>4
<strong>Explanation: </strong>The pairs whose sum is found to be 21 are (1, 20), (5, 16), (8, 13), (11, 10).</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 2, x = 10
mat1 = {{1, 2},
        {3, 4}}
mat2 = {{4, 5},
        {6, 7}}
<strong>Output: </strong>2
<strong>Explanation: </strong>The pairs whose sum found to be 10 are (4, 6), (3, 7).</span></pre>
<p><span style="font-size: 18px;"><strong>User Task:</strong><br>Your task is to complete the function&nbsp;<strong><code>countPairs()</code></strong><strong> </strong>which takes 4 arguments&nbsp;<strong>mat1</strong>, <strong>mat2</strong>, <strong>n</strong>, <strong>x</strong>, and returns the count of pairs whose sum equals to <strong>x</strong>. You don't need to take any input or print anything.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n<sup>2</sup>).<br><strong>Expected Auxiliary Space:</strong> O(1).</span></p>
<p><span style="font-size: 20px;"><strong>Constraints:</strong><br>1 ≤ mat1[i][j] , mat2[i][j] ≤ 10<sup>5<br></sup></span><span style="font-size: 20px;">1 ≤ n ≤ 100<br>1 ≤ x ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>FactSet</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Sorting</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;