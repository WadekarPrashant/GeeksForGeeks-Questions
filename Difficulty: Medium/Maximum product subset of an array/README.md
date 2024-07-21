<h2><a href="https://www.geeksforgeeks.org/problems/maximum-product-subset-of-an-array/1">Maximum product subset of an array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 14pt;">Given an array <strong>arr</strong>. The task is to find and return the maximum product possible with the <strong>subset</strong> of elements present in the array. </span></p>
<p><span style="font-size: 14pt;">Note:</span></p>
<ol>
<li><span style="font-size: 14pt;">The maximum product can be a single element also.</span></li>
<li><span style="font-size: 14pt;">Since the product can be large, return it modulo <strong>10<sup>9</sup> + 7</strong>.</span></li>
</ol>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [-1, 0, -2, 4, 3]
<strong>Output: </strong>24
<strong>Explanation:</strong> Maximum product will be ( -1 * -2 * 4 * 3 ) = 24</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [-1, 0]
<strong>Output: </strong>0<br><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation:</strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> Maximum product will be ( -1 * 0) = 0</span><br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [5]
<strong>Output: </strong>5</span><br><span style="font-size: 14pt;"><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation:</strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> Maximum product will be 5.</span></span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= arr.size() &lt;= 2 * 10<sup>4</sup><br>-10 &lt;= arr[i] &lt;= 10</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;