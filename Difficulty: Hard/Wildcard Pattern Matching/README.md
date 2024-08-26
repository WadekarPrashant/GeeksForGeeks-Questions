<h2><a href="https://www.geeksforgeeks.org/problems/wildcard-pattern-matching/1">Wildcard Pattern Matching</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">Given two strings</span><span style="font-size: 18px;">&nbsp;</span><strong style="font-size: 18px;">pattern </strong><span style="font-size: 18px;">and&nbsp;</span><strong style="font-size: 18px;">str</strong><span style="font-size: 18px;"> which may be of different size, You have to return <strong>1</strong> if the wildcard pattern i.e. <strong>pattern, </strong>matches&nbsp;with <strong>str</strong> else return <strong>0</strong>. All characters of the string <strong>str</strong> and <strong>pattern</strong> always belong to the Alphanumeric characters</span><span style="font-size: 18px;">.</span></p>
<p><span style="font-size: 18px;">The wildcard pattern can include the characters <strong>?</strong> and <strong>*</strong><br><strong>‘?’</strong> – matches any single character.<br><strong>‘*’</strong> – Matches any sequence of characters (including the empty sequence).</span></p>
<p><span style="font-size: 18px;"><strong>Note:&nbsp;</strong>The matching should cover the entire str (not partial str).</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>pattern = "ba*a?", str = "baaabab"
<strong>Output:</strong> 1
<strong>Explanation: </strong>replace '*' with "aab" and 
'?' with 'b'.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: pattern = "a*ab", str = "baaabab"
<strong>Output:</strong> 0
<strong>Explanation</strong>: Because in string pattern character 'a' at first position,
pattern and str can't be matched. 
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity</strong>: O(n*m)<br><strong>Expected Auxiliary Space</strong>: O(n*m)<br><br><strong>Constraints:</strong><br>1 &lt;= length of(str, pattern) &lt;= 200</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Walmart</code>&nbsp;<code>Google</code>&nbsp;<code>InMobi</code>&nbsp;<code>United Health Group</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Recursion</code>&nbsp;<code>Strings</code>&nbsp;