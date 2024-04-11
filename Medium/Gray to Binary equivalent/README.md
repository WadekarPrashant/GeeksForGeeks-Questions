<h2><a href="https://www.geeksforgeeks.org/problems/gray-to-binary-equivalent-1587115620/1">Gray to Binary equivalent</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an integer number <strong>n, </strong>which is a decimal representation of <span style="text-decoration: underline; color: #236fa1;"><a style="color: #236fa1; text-decoration: underline;" href="https://www.geeksforgeeks.org/what-is-gray-code/" target="_blank" rel="noopener"><strong>Gray Code.</strong></a></span> Find the <strong>binary equivalent</strong> of the Gray Code &amp; return the <strong>decimal representation</strong> of the <strong>binary equivalent</strong>.</span></p>
<p><span style="font-size: 18px;"><img src="https://media.geeksforgeeks.org/img-practice/ScreenShot2021-08-27at10-1630039200.png" alt="">&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Note:&nbsp;</span></strong><span style="font-size: 18px;">Please visit <span style="text-decoration: underline;"><span style="color: #236fa1; text-decoration: underline;"><strong><a style="color: #236fa1; text-decoration: underline;" href="https://docs.google.com/document/d/1JvuMcN8XXUP_bOiZmVvbNskWu4K2ieA0aoCJWAEexEM/edit?usp=sharing" target="_blank" rel="noopener">here</a></strong></span></span> to learn How Gray Code is generated.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: <br></strong>n = 4
<strong>Output</strong>: <br>7
<strong>Explanation</strong>:
Given 4, its gray code =  110.
Binary equivalent of the gray code 110 is 100.
Return 7 representing gray code 100.
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: <br>n = 15
<strong>Output</strong>: <br>10
<strong>Explanation</strong>:
Given 15 representing gray code 1000.
Binary equivalent of gray code 1000 is 1111.
Return 10 representing gray code 1111 
ie binary 1010.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;</strong><br>You don't need to read input or print anything.&nbsp;Your task is to complete the function&nbsp;<strong>grayToBinary</strong>() which accepts an integer&nbsp;<strong>n</strong>&nbsp;as an input parameter and&nbsp;<strong>returns decimal representation</strong> of the <strong>binary equivalent</strong> of the given gray code. </span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(log (n)).<br><strong>Expected Auxiliary Space:</strong> O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 &lt;= n &lt;= 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;