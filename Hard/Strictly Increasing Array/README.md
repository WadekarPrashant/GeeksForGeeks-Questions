<h2><a href="https://www.geeksforgeeks.org/problems/convert-to-strictly-increasing-array3351/1">Strictly Increasing Array</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><table style="border-collapse: collapse; width: 100.013%; border-color: #CED4D9;" border="1">
<tbody>
<tr>
<td style="width: 99.2396%; text-align: center;"><strong><a href="https://forms.gle/vehKoPPpBZ9g6vf8A" target="_blank" rel="noopener">Share Your Path: Journey with POTD</a></strong><br><a href="https://forms.gle/vehKoPPpBZ9g6vf8A" target="_blank" rel="noopener"><strong>https://forms.gle/vehKoPPpBZ9g6vf8A</strong></a></td>
</tr>
</tbody>
</table>
<p>&nbsp;</p>
<p><span style="font-size: 14pt;">Given an array <strong>nums</strong> of <strong>n</strong> positive integers. Find the minimum number of operations required to modify the array such that array elements are in <strong>strictly increasing</strong> order (nums[i] &lt; nums[i+1]).<br>Changing&nbsp;a number to <strong>greater </strong>or <strong>lesser </strong>than original number is counted as one operation.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> Array elements can become negative after applying operation.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:<br></strong>n = 6<br>nums = [1, 2, 3, 6, 5, 4]
<strong>Output: <br></strong>2
<strong>Explanation: <br></strong>By decreasing 6 by 2 and increasing 4 by 2, nums will be like [1, 2, 3, 4, 5, 6] which is stricly increasing.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> <br>n = 4<br>nums = [1, 1, 1, 1]
<strong>Output: <br></strong>3
<strong>Explanation: <br></strong>One such array after operation can be [-2, -1, 0, 1]. We require atleast 3 operations for this example.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>min_opeartions()&nbsp;</strong>which takes the array <strong>nums </strong>as input parameter and returns the minimum number of opeartion needed to make the array strictly increasing.</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n<sup>2</sup>)</span><br><span style="font-size: 14pt;"><strong>Expected Space Complexity:&nbsp;</strong>O(n)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:&nbsp;</strong><br>1 &lt;= n &lt;= 10<sup>3</sup><br>1 &lt;= nums[i] &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;