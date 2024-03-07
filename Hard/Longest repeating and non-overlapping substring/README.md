<h2><a href="https://www.geeksforgeeks.org/problems/longest-repeating-and-non-overlapping-substring3421/1">Longest repeating and non-overlapping substring</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>s </strong>of length <strong>n</strong>, find the longest repeating non-overlapping substring in it. In other words find 2 identical substrings of maximum length which <strong>do not overlap</strong>. </span><span style="font-size: 18px;">Return the longest non-overlapping substring. Return <strong>"-1"</strong>&nbsp;if no such string exists.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>Multiple Answers are possible but you have to return the substring whose <strong>first occurrence is earlier</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>For Example:</strong> "abhihiab", here both <strong>"ab"</strong> and <strong>"hi"</strong> are possible answers. But you will have to return <strong>"ab"</strong> because it's first occurrence appears before the </span><span style="font-size: 18px;">first occurrence</span><span style="font-size: 18px;"> of </span><span style="font-size: 18px;">"hi".</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">n = 9</span>
<span style="font-size: 18px;">s =<strong> </strong>"acdcdacdc"</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">"acdc"</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">The string "acdc" is the longest Substring of s which is repeating but not overlapping.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">n = 7</span>
<span style="font-size: 18px;">s =<strong> </strong>"heheheh"</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">"heh"</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">The string "heh" is the longest Substring of s which is repeating but not overlapping.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function<strong> longestSubstring()</strong> which takes an Integer <strong>n</strong> and a string <strong>s</strong> as input and returns the answer.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong> O(n<sup>2</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>MakeMyTrip</code>&nbsp;<code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;