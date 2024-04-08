<h2><a href="https://www.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1">Optimal Strategy For A Game</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array <strong>arr </strong>of size<strong> n</strong>. The elements of the array represent <strong>n</strong> <strong>coin </strong>of <strong>values v<sub>1</sub>, v<sub>2</sub>, ....v<sub>n</sub></strong>. You play against an opponent in an <strong>alternating </strong>way. </span><span style="font-size: 18px;">In each <strong>turn</strong>, a player selects either the <strong>first or last coin</strong> from the <strong>row</strong>, removes it from the row permanently, and <strong>receives the value</strong> of the coin.<br></span><span style="font-size: 18px;">You need to determine the <strong>maximum possible amount of money </strong>you can win if you <strong>go first</strong>.<br><strong>Note:</strong> Both the players are playing optimally.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 4
arr[] = {5, 3, 7, 10}
<strong>Output: <br></strong>15<strong>
Explanation: </strong>The user collects maximum
value as 15(10 + 5). It is guarantee that we cannot get more than 15 by any possible moves.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">n = 4
arr[] = {8, 15, 3, 7}
<strong>Output: <br></strong>22<strong>
Explanation: </strong>The user collects maximum
value as 22(7 + 15). </span><span style="font-size: 14pt;">It is guarantee that we cannot get more than 22 by any possible moves.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete the function&nbsp;<strong>maximumAmount()</strong>&nbsp;which takes an array <strong>arr[]</strong> (represent values of <strong>n</strong> coins) and <strong>n</strong> as a number of coins as a parameter and returns the <strong>maximum possible amount of money </strong>you can win if you <strong>go first</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong> : O(n*n)<br><strong>Expected Auxiliary Space</strong>: O(n*n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>2 &lt;= n &lt;= 10<sup>3</sup></span><br><span style="font-size: 18px;">1 &lt;= arr[i] &lt;= 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;