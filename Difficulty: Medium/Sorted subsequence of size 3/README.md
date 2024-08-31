<h2><a href="https://www.geeksforgeeks.org/problems/sorted-subsequence-of-size-3/1">Sorted subsequence of size 3</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">You are given an array arr, you need to find any three elements in it such that <strong>arr[i] &lt; arr[j] &lt; arr[k] </strong>and<strong> i &lt; j &lt; k.<br></strong></span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: </span></p>
<ol>
<li><span style="font-size: 18px;">The output will be 1 if the subsequence returned by the function is present in the array arr</span></li>
<li><span style="font-size: 18px;">If the subsequence is not present in the array then return an empty array, the driver code will print 0.</span></li>
<li><span style="font-size: 18px;">If the subsequence returned by the function is not in the format as mentioned then the output will be -1.</span></li>
</ol>
<p><strong><span style="font-size: 18px;">Examples :</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">arr = [1, 2, 1, 1, 3]
<strong>Output: </strong>1<strong>
Explanation: </strong>A subsequence 1 2 3 exist<strong>.</strong></span>
</pre>
<pre><strong><span style="font-size: 18px;">Input: </span></strong><span style="font-size: 18px;">arr = [1, 1, 3]
<strong>Output: </strong>0<strong>
Explanation: </strong>No such Subsequence exist, so empty array is returned (the driver code automatically prints 0 in this case).</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br></span><span style="font-size: 18px;"><strong>Expected Auxiliary Space:&nbsp;</strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 10<sup>5</sup><br>1 &lt;= arr[i] &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>FactSet</code>&nbsp;<code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;