<h2><a href="https://www.geeksforgeeks.org/problems/largest-subsquare-surrounded-by-x0558/1">Largest subsquare surrounded by X</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a square matrix<strong> a </strong>of size <strong>n x n</strong>, where each cell can be either '<strong>X</strong>' or '<strong>O</strong>', you need to find the size of the <strong>largest square subgrid</strong> that is completely surrounded by '<strong>X</strong>'. More formally you need to find the largest square within the grid where all its <strong>border cells are 'X'</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 2
a = [[X,X],<br>     [X,X]]
<strong>Output:</strong>
2
<strong>Explanation:</strong>
The largest square submatrix 
surrounded by X is the whole 
input matrix.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4
a = [[X,X,X,O],<br>     [X,O,X,X],
     [X,X,X,O],<br>     [X,O,X,X]]
<strong>Output:</strong>
3
<strong>Explanation:</strong>
Here,the input represents following 
matrix of size 4 x 4
<strong>X</strong> <strong>X</strong> <strong>X</strong> O
<strong>X</strong> O <strong>X</strong> X
<strong>X</strong> <strong>X</strong> <strong>X</strong> O
X O X X
The square submatrix starting at 
(0,0) and ending at (2,2) is the 
largest submatrix surrounded by X.
Therefore, size of that matrix would be 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>largestSubsquare()</strong> which takes the integer&nbsp;<strong>n</strong> and the matrix&nbsp;<strong>a</strong> as input parameters and returns the size of the <strong>largest subsquare</strong> surrounded by 'X'.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n<sup>2</sup>)<br><strong>Expected Auxillary Space: </strong>O(n<sup>2</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 1000<br>a[i][j] belongs to {'X','O'}&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>D-E-Shaw</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;