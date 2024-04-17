<h2><a href="https://www.geeksforgeeks.org/problems/count-pairs-in-an-array4145/1">Count Pairs in an Array</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>arr</strong> of <strong>n</strong> integers, count all pairs (<strong>arr[i]</strong>,<strong> arr[j]</strong>) in it&nbsp;such that <strong>i*arr[i]</strong> &gt; <strong>j*arr[j] </strong>and <strong>0 ≤ i &lt; j &lt; n</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Note</strong>: 0-based Indexing is followed.</span></p>
<p><span style="font-size: 14pt;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input :</strong>
n = 4<br>arr[] = {8, 4, 2, 1}
<strong>Output :</strong>
2<br><strong>Explanation:<br></strong>If we see the array after operations<br>[0*8, 1*4, 2*2, 3*1] =&gt; [0, 4, 4, 3]<br>Pairs which hold the condition i*arr[i] &gt; j*arr[j] are (4,1) and (2,1), so in total 2 pairs are available.</span></pre>
<p><span style="font-size: 14pt;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input :</strong>
n = 7<br>arr[] = {5, 0, 10, 2, 4, 1, 6}
<strong>Output:</strong>
5
<strong>Explanation :</strong>
Pairs which hold the condition i*arr[i] &gt; j*arr[j] are (10,2), (10,4), (10,1), (2,1) and (4,1), so in total 5 pairs are there.</span></pre>
<p><span style="font-size: 14pt;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countPairs()</strong> which takes the array <strong>arr[]</strong> and its size <strong>n</strong><strong> </strong>as inputs and returns the required result.</span></p>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity: </strong>O(n*log(n))<br><strong>Expected Auxiliary Space: </strong>O(n*log(n))</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1<strong> ≤</strong> n&nbsp;<strong>≤ </strong>10<sup>4</sup><br>0 ≤ arr[i] <strong>≤ </strong>10<sup>4</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Merge Sort</code>&nbsp;