<h2><a href="https://www.geeksforgeeks.org/problems/maximize-dot-product2649/1">Maximize dot product</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two arrays <strong>a</strong> and <strong>b</strong> of positive integers of size <strong>n</strong> and <strong>m</strong> where <strong>n &gt;= m</strong>, the task is to maximize the dot product by inserting zeros in the second array but you cannot disturb the order of elements.<br><br>Dot product of array a and b of size n is <strong>a[0]*b[0] + a[1]*b[1] + ... + a[n-1]*b[n-1].</strong></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: <br>n = 5, a[] = {2, 3, 1, 7, 8} 
m = 3, b[] = {3, 6, 7}
<strong>Output:</strong> <br>107
<strong>Explanation</strong>: <br>We get maximum dot product after inserting 0 at first and third positions in second array.<br>Therefore b becomes {0, 3, 0, 6, 7}. 
Maximum dot product = 2*0 + 3*3 + 1*0 + 7*6 + 8*7 = 107.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: <br>n = 3, a[] = {1, 2, 3}
m = 1, b[] = {4} 
<strong>Output:</strong> <br>12 
<strong>Explanation</strong>: <br>We get maximum dot product after inserting 0 at first and second positions in second array.<br>Therefore b becomes {0, 0, 4}. 
Maximum Dot Product = 1*0 + 2*0 + 3*4 = 12.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Complete the function <strong><code>maxDotProduct</code>()&nbsp;</strong>which takes <strong>n, m</strong>, array <strong>a </strong>and<strong> b</strong> as input parameters and returns the maximum value.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n*m)<br><strong>Expected Auxiliary Space:</strong> O(n*m)<br><br><strong>Constraints:</strong><br>1 ≤ m ≤n ≤ 10<sup>3</sup></span><br><span style="font-size: 18px;">1 ≤ a[i], b[i] ≤ 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Directi</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;