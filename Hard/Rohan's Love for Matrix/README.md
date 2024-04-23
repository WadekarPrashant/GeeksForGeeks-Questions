<h2><a href="https://www.geeksforgeeks.org/problems/rohans-love-for-matrix4723/1">Rohan's Love for Matrix</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Rohan has a special love for the matrices especially for the first element of the matrix. Being good at Mathematics, he also loves to solve the different problem on the matrices. So one day he started to&nbsp;<strong>multiply</strong>&nbsp;the matrix with the&nbsp;<strong>original matrix</strong>.&nbsp; The elements of the&nbsp;<strong>original matrix</strong>&nbsp;<strong>a&nbsp;</strong>are given by&nbsp;<strong>[a<sub>00</sub>=1 , a<sub>01</sub>=1, a<sub>10</sub>=1, a<sub>11</sub>=0]</strong>.<br>Given the power of the matrix,<strong>&nbsp;n</strong>&nbsp;calculate the&nbsp;<strong>a<sup>n</sup></strong>&nbsp;and return&nbsp;the&nbsp;<strong>a<sub>10</sub></strong>&nbsp;element&nbsp;<strong>mod</strong>&nbsp;<strong>1000000007</strong>.</span><br><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: <br>n = 3
<strong>Output:</strong>&nbsp;<br>2&nbsp;
<strong>Explanation</strong>: Take the cube of the original matrix 
i.e <strong>a<sup>3</sup></strong> and the (<strong>a<sub>10</sub></strong>)<sup>th</sup> element is 2.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>n = 4
<strong>Output:&nbsp;<br></strong>3
<strong>Explanation</strong>: Take the cube of the original matrix 
i.e <strong>a<sup>4</sup></strong> and the (<strong>a<sub>10</sub></strong>)<sup>th </sup>element is 3.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You dont need to read input or print anything. Complete the function&nbsp;<strong>firstElement()&nbsp;</strong>which takes&nbsp;<strong>n</strong>&nbsp;as input parameter and returns the&nbsp;<strong>a<sub>10</sub></strong>&nbsp;element&nbsp;<strong>mod 1000000007&nbsp;</strong>of&nbsp;<strong>a<sup>n</sup></strong><sup>.</sup></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;= n&nbsp;&lt;=10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;