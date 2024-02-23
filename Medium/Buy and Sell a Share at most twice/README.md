<h2><a href="https://www.geeksforgeeks.org/problems/buy-and-sell-a-share-at-most-twice/1">Buy and Sell a Share at most twice</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">In daily share trading, a buyer buys shares in the morning and sells them on the same day. If the trader is allowed to make at most 2 transactions in a day, the second transaction can only start after the first one is complete (buy-&gt;sell-&gt;buy-&gt;sell). The stock prices throughout the day are represented in the form of an array of <strong>prices</strong>.&nbsp;</span></p>
<p><span style="font-size: 18px;">Given an array <strong>price</strong> of size <strong>n</strong>, find out the <strong>maximum</strong> profit that a share trader could have made.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 6
prices[] = {10,22,5,75,65,80}
<strong>Output:</strong>
87
<strong>Explanation:</strong>
Trader earns 87 as sum of 12, 75 Buy at 10, sell at 22, Buy at 5 and sell at 80.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">n = 7
prices[] = {2,30,15,10,8,25,80}
<strong>Output:</strong></span>
<span style="font-size: 18px;">100</span>
<span style="font-size: 18px;"><strong>Explanation:<br></strong></span><span style="font-size: 18px;">Trader earns 100 as sum of 28 and 72 Buy at price 2, sell at 30, Buy at 8 and sell at 80,</span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong></p>
<p><span style="font-size: 18px;">Complete the function <strong>maxProfit()</strong> which takes an integer array <strong>price</strong> as the only argument and returns an integer, representing the maximum profit, if only two transactions are allowed.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br></span><span style="font-size: 18px;"><strong>Expected Space Complexity:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span></p>
<ul>
<li><span style="font-size: 18px;">1 &lt;= n &lt;= 10<sup>5</sup></span></li>
<li><span style="font-size: 18px;">1 &lt;= price[i] &lt;= 10<sup>5</sup></span></li>
</ul></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Facebook</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;