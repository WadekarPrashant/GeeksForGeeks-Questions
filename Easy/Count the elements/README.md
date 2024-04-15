<h2><a href="https://www.geeksforgeeks.org/problems/count-the-elements1529/1">Count the elements</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two arrays <strong>a </strong>and <strong>b</strong> both of size <strong>n</strong>. Given <strong>q</strong> queries in an array <strong>query</strong> each having a positive integer <strong>x</strong> denoting an index of the array <strong>a</strong>. For each query, your task is to find all the elements <strong>less than or equal</strong> to <strong>a[x]</strong> in the array <strong>b</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 3
a[] = {4,1,2}
b[] = {1,7,3}<br>q = 2<br>query[] = {0,1}
<strong>Output :</strong> <br>2
1
<strong>Explanation</strong>: <br>For 1<sup>st</sup> query, the given index is 0, a[0] = 4. There are 2 elements(1 and 3) which are less than or equal to 4.
For 2<sup>nd</sup> query, the given index is 1, a[1] = 1. There exists only 1 element(1) which is less than or equal to 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 4
a[] = {1,1,5,5}
b[] = {0,1,2,3}<br>q = 4
query[] = {0,1,2,3}
<strong>Output :</strong> <br>2<br>2<br>4<br>4
<strong>Explanation</strong>: <br>For 1<sup>st</sup> query and 2<sup>nd</sup> query, the given index is 0 and 1 respectively, a[0] = a[1] = 1. There are 2 elements(0 and 1) which are less than or equal to 1. 
For 3<sup style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">rd</sup><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> query and 4</span><sup style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">th</sup><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> query, the given index is 2 and 3 respectively, a[2] = a[3] = 5. All the 4 elements are less than or equal to 5.</span>   </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>countElements()</strong>&nbsp;that takes<strong>&nbsp;</strong>array<strong> a </strong>and<strong> b</strong> of size <strong>n, </strong>and array<strong> query </strong>of size <strong>q </strong>as parameters<strong>&nbsp;</strong>and returns an array that contains the answer to the corresponding queries.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n+q+</span><span style="font-size: 18px;">maximum of&nbsp;</span><strong style="font-size: 18px;">a</strong><span style="font-size: 18px;">&nbsp;and&nbsp;</span><strong style="font-size: 18px;">b</strong><span style="font-size: 18px;">).</span></p>
<p><span style="font-size: 18px;"><strong>Expected Auxiliary Space:</strong> O(maximum of <strong>a</strong> and <strong>b</strong>).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ q&nbsp;</span><span style="font-size: 18px;">≤ n</span><span style="font-size: 18px;"> ≤ 10<sup>5</sup><br></span><span style="font-size: 18px;">1&nbsp;</span><span style="font-size: 18px;">≤ a[i], b[i]&nbsp;</span><span style="font-size: 18px;">≤ 10<sup>5</sup><br>0&nbsp;</span><span style="font-size: 18px;">≤ query[i] &lt;</span><span style="font-size: 18px;">&nbsp;n</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Yatra.com</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;