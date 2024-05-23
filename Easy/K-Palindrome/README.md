<h2><a href="https://www.geeksforgeeks.org/problems/find-if-string-is-k-palindrome-or-not1923/1">K-Palindrome</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>str</strong>&nbsp;of length <strong>n,</strong>&nbsp;find&nbsp;if the string is K-Palindrome or not. A k-palindrome string transforms into a palindrome on removing at most <strong>k</strong> characters from it.</span></p>
<p><br><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> str = "abcdecba"
n = 8, k = 1
<strong>Output:</strong> 1
<strong>Explaination:</strong> By removing 'd' or 'e' 
we can make it a palindrome.</span></pre>
<p><br><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> str = "abcdefcba"
n = 9, k = 1
<strong>Output:</strong> 0
<strong>Explaination:</strong> By removing a single 
character we cannot make it a palindrome.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>kPalindrome()</strong> which takes string str, n, and k as input parameters and returns <strong>1</strong> if str is a K-palindrome else returns <strong>0</strong>.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n*n)<br><strong>Expected Auxiliary Space:</strong> O(n*n)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, k&nbsp;≤ 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;