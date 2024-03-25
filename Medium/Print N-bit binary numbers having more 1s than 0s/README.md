<h2><a href="https://www.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1">Print N-bit binary numbers having more 1s than 0s</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a positive integer <strong>n</strong>. Your task is to generate a string list<strong> </strong>of all<strong> n-bit binary numbers</strong> where, for any prefix of the number, there are <strong>more or an equal</strong> number of 1's than 0's. The numbers should be sorted in <strong>decreasing order of magnitude</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  <br>n = 2</span><span style="font-size: 18px;">
<strong style="font-size: 18px;">Output:</strong><span style="font-size: 18px;"> <br>"11, 10"
</span><strong style="font-size: 18px;">Explanation:</strong><span style="font-size: 18px;"> Valid numbers are those where each prefix has more 1s than 0s:<br>11: all its prefixes (1 and 11) have more 1s than 0s.
10: all its prefixes (1 and 10) have more 1s than 0s.<br>So, the output is "11, 10".</span></span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  <br>n = 3
<strong>Output:</strong> <br>"111, 110, 101"
<strong>Explanation:</strong> Valid numbers are those where each prefix has more 1s than 0s.<br>111: all its prefixes (1, 11, and 111) have more 1s than 0s.
110: all its prefixes (1, 11, and 110) have more 1s than 0s.<br>101: all its prefixes (1, 10, and 101) have more 1s than 0s.<br>So, the output is "111, 110, 101".</span></pre>
<p><span style="font-size: 18px;"><strong>User Task:</strong><br>Your task is to complete the function&nbsp;<strong>NBitBinary()&nbsp;</strong>which takes a single number as input&nbsp;<strong>n</strong> and returns the <strong>list of strings in decreasing order</strong>. You need not take any input or print anything.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(|2<sup>n</sup>|)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(2<sup>n</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 15</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Recursion</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;