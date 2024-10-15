<h2><a href="https://www.geeksforgeeks.org/problems/subarray-range-with-given-sum0128/1">Subarray range with given sum</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given an unsorted array of integers <strong>arr[]</strong>, and a target<strong> tar</strong>, determine the number of subarrays whose elements sum up to the target value.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:<br></strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [10, 2, -2, -20, 10] , tar = -10
<strong>Output: </strong>3<strong>
Explanation: </strong>Subarrays with sum -10 are: [10, 2, -2, -20], [2, -2, -20, 10] and [-20, 10].</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 4, 20, 3, 10, 5] , tar = 33
<strong>Output: </strong>1<strong>
Explanation: </strong>Subarray with sum 33 is: [20,3,10].</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n)<br><strong>Expected Auxilary Space:&nbsp;</strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>6</sup><br>-10<sup>5</sup> &lt;= arr[i] &lt;= 10<sup>5</sup><br>-10<sup>5</sup> &lt;= tar &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;