<h2><a href="https://www.geeksforgeeks.org/problems/divisor-game-1664432414/1">Divisor Game</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Alice and Bob take turns playing a game, with Alice starting first.<br>Initially, there is a number <strong>n</strong> on the chalkboard. On each player's turn, that player makes a move consisting of:</span></p>
<ul>
<li><span style="font-size: 18px;">Choosing any <strong>x</strong> with <strong>0 &lt; x &lt; n</strong>&nbsp; and <strong>n % x == 0</strong>.</span></li>
<li><span style="font-size: 18px;">Replacing the number <strong>n</strong> on the chalkboard with <strong>n - x</strong>.</span></li>
</ul>
<p><span style="font-size: 18px;">Also, if a player cannot make a move, they lose the game.<br>Return <strong>true</strong> if and only if Alice wins the game,&nbsp;assuming both players play <strong>optimally.</strong></span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="background: #eeeeee; border: 1px solid #cccccc; padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: #222426; --darkreader-inline-border-top: #3e4446; --darkreader-inline-border-right: #3e4446; --darkreader-inline-border-bottom: #3e4446; --darkreader-inline-border-left: #3e4446;"><span style="font-size: 18px;"><strong>Input:</strong><br>n = 2<br><strong>Output: </strong>True<br><strong>Explanation:</strong>&nbsp;Alice chooses 1, and Bob has no more moves.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="background: #eeeeee; border: 1px solid #cccccc; padding: 5px 10px; --darkreader-inline-bgimage: initial; --darkreader-inline-bgcolor: #222426; --darkreader-inline-border-top: #3e4446; --darkreader-inline-border-right: #3e4446; --darkreader-inline-border-bottom: #3e4446; --darkreader-inline-border-left: #3e4446;"><span style="font-size: 18px;"><strong>Input:</strong><br>n = 3<br><strong>Output:&nbsp;</strong>False<br><strong>Explanation:</strong>&nbsp;Alice chooses 1, Bob chooses 1, and Alice has no more moves.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>divisorGame()</strong>&nbsp;which takes an integer&nbsp;<strong>n </strong>as a parameter and returns true if Alice wins the game.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(1)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>3</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Algorithms</code>&nbsp;