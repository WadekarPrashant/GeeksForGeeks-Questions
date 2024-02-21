<h2><a href="https://www.geeksforgeeks.org/problems/boolean-parenthesization5610/1">Boolean Parenthesization</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a boolean expression <strong>s</strong> of length <strong>n</strong> with following symbols.<br>Symbols<br>&nbsp;&nbsp;&nbsp; 'T' ---&gt; true<br>&nbsp;&nbsp;&nbsp; 'F' ---&gt; false<br>and following operators filled between symbols<br>Operators<br>&nbsp;&nbsp;&nbsp; &amp;&nbsp;&nbsp; ---&gt; boolean AND<br>&nbsp;&nbsp;&nbsp; |&nbsp;&nbsp; ---&gt; boolean OR<br>&nbsp;&nbsp;&nbsp; ^&nbsp;&nbsp; ---&gt; boolean XOR<br>Count the number of ways we can parenthesize the expression so that the value of expression evaluates to true.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> The answer can be large, so return it with <strong>modulo 1003</strong></span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>n = 7
s = T|T&amp;F^T
<strong>Output:</strong> <br>4
<strong>Explaination:</strong> <br>The expression evaluates to true in 4 ways ((T|T)&amp;(F^T)), (T|(T&amp;(F^T))), (((T|T)&amp;F)^T) and (T|((T&amp;F)^T)).</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> <br>n = 5
s = T^F|F
<strong>Output:</strong> <br>2
<strong>Explaination:</strong> <br>((T^F)|F) and (T^(F|F)) are the only ways.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>countWays()</strong> which takes n and s as input parameters and returns number of possible ways modulo 1003.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n<sup>3</sup>)<br><strong>Expected Auxiliary Space:</strong> O(n<sup>2</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 200&nbsp;</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Intuit</code>&nbsp;<code>Linkedin</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;