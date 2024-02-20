<h2><a href="https://www.geeksforgeeks.org/problems/word-break1352/1">Word Break</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>s </strong>and a dictionary of&nbsp;<strong>n</strong> words <strong>dictionary</strong>, find out if a&nbsp;<strong>s </strong>can be segmented into a space-separated sequence of dictionary words. R</span><span style="font-size: 18px;">eturn 1 if it is possible to break the&nbsp;<strong>s </strong>into a </span><span style="font-size: 18px;">sequence of dictionary words</span><span style="font-size: 18px;">, else return 0.</span><span style="font-size: 18px;">&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong>&nbsp;From the dictionary&nbsp;<strong>dictionary </strong>each word can be taken any number of times and in any order.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 6<br><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">s</span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;"> </strong>= "ilike"<br>dictionary = { "i", "like", "sam", "sung", "samsung", "mobile"}<br><strong>Output:
</strong>1
<strong>Explanation:
</strong>The string can be segmented as "i like".
</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
n = 6<br><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;">s</span><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; white-space: normal;"> </strong>= "ilikesamsung"<br></span><span style="font-size: 18px;">dictionary = { "i", "like", "sam", "sung", "samsung", "mobile"}
<strong>Output:
</strong>1
<strong>Explanation</strong>:
The string can be segmented as 
"i like samsung" or "i like sam sung".
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Complete&nbsp;<strong>wordBreak()</strong>&nbsp;function which takes a string and list of strings as a parameter&nbsp;and returns 1 if it is possible to break words, else return&nbsp;0. You don't need to read any input or print any output, it is done by driver code.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(len(<strong>s</strong>)<sup>2</sup>)<br></span><span style="font-size: 18px;"><strong>Expected Space Complexity:</strong>&nbsp;O(len(<strong>s</strong>))</span></p>
<p><span style="font-size: 18px;"><strong>Constraints</strong>:<br>1 ≤ n ≤ 12<br>1 ≤ len(s) ≤ 1100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Hike</code>&nbsp;<code>Walmart</code>&nbsp;<code>MAQ Software</code>&nbsp;<code>Google</code>&nbsp;<code>IBM</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;