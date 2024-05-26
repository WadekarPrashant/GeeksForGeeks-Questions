<h2><a href="https://www.geeksforgeeks.org/problems/minimum-cost-to-make-two-strings-identical1107/1">Minimum Cost To Make Two Strings Identical</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two strings <strong>x</strong> and <strong>y</strong>, and two values <strong>costX</strong> and <strong>costY</strong>, the task is to find the minimum cost required to make the given two strings identical. You can delete characters from both the strings. The cost of deleting a character from string X is costX and from Y is costY. The cost of removing all characters from a string is the same.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>x = "abcd", y = "acdb", costX = 10 
       costY = 20.
<strong>Output:</strong> 30
<strong>Explanation: </strong>For Making both strings 
identical we have to delete character 
'b' from both the string, hence cost 
will be = 10 + 20 = 30.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>x = "ef", y = "gh", costX = 10
        costY = 20.
<strong>Output: </strong>60
<strong>Explanation: </strong>For making both strings 
identical, we have to delete 2-2 
characters from both the strings, hence 
cost will be = 10 + 10 + 20 + 20 = 60.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or&nbsp;print anything. Your task is to complete the function <strong><code>findMinCost</code>()&nbsp;</strong>which takes both strings and the costs as input parameters and returns the minimum cost.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(|x|*|y|)<br><strong>Expected Space Complexity: </strong>O(|x|*|y|</span><span style="font-size: 18px;">)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |x|, |y| ≤ 1000<br>1&lt;= costX, costY &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;