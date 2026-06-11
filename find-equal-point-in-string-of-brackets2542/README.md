<h2><a href="https://www.geeksforgeeks.org/problems/find-equal-point-in-string-of-brackets2542/1">Equal Point in Brackets</a></h2>
<h3>Difficulty: Easy</h3>
<hr>
<div class="problem-statement">
<p><span style="font-size: 18px;">Given a string <strong>s</strong>&nbsp;of opening and closing brackets '(' and ')' only, find an <strong>equal point</strong> in the string. An equal point is a position <strong>k</strong> (0-based) such that the number of opening brackets before position k is equal to the number of closing brackets from position k to the end of the string. </span><span style="font-size: 18px;">If multiple such points exist, return the first valid position.</span></p>
<ul>
<li><span style="font-size: 18px;">The string can be split at any position from 0 to n, where n is the length of the string. </span></li>
<li><span style="font-size: 18px;">If we split at 0, it means there is an empty string on left.</span></li>
<li><span style="font-size: 18px;"> If we split at n, it means there is an empty string on right.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>s = "(())))("
<strong>Output: </strong>4
<strong>Explanation:<br></strong></span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/703123/Web/Other/blobid0_1781098795.webp" width="453" height="221"> </pre>
<pre><span style="font-size: 18px;"><strong>Input :</strong> s = "))"
<strong>Output:</strong> 2
<strong>Explanation: </strong></span><span style="font-size: 18px;">After index 2, the string splits into "))" and an empty string. The number of opening brackets in the first part is 0 and the number of closing brackets in the second part is also 0.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br><span style="font-size: 14pt;">1 ≤ s.size() ≤ 10<sup>5</sup><sup><br></sup></span></span></p>
</div>

---
<p align="center">
  <a href="https://www.geeksforgeeks.org/problems/find-equal-point-in-string-of-brackets2542/1">View Problem on GeeksforGeeks</a>
</p>