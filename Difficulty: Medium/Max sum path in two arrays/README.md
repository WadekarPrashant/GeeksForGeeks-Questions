<h2><a href="https://www.geeksforgeeks.org/problems/max-sum-path-in-two-arrays/1">Max sum path in two arrays</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">Given two <strong>sorted</strong> arrays of <strong>distinct </strong>integers <strong>arr1</strong> and <strong>arr2</strong>. Each array may have some elements in common with the other array. Find the <strong>maximum sum of a path</strong> from the beginning of any array to the end of any array. You can switch from one array to another array only at the common elements. </span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong>&nbsp; When we switch from one array to other,&nbsp; we need to consider the common element only once in the result.<br></span></p>
<p><span style="font-size: 18px;"><strong>Examples :&nbsp;</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr1 = [2, 3, 7, 10, 12] , arr2 = [1, 5, 7, 8]
<strong>Output: </strong>35<strong>
Explanation: </strong>The path will be 1+5+7+10+12 = 35, where 1 and 5 come from arr2 and then 7 is common so we switch to arr1 and add 10 and 12.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr1 = [1, 2, 3] , arr2[] = [3, 4, 5]
<strong>Output: </strong>15<strong>
Explanation: </strong>The path will be 1+2+3+4+5=15.</span></pre>
<pre><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(m + n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr1.size(), arr2.size() &lt;= 10<sup>4</sup><br>1 &lt;= arr1[i], arr2[i] &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;