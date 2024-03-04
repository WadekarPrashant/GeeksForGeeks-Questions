<h2><a href="https://www.geeksforgeeks.org/problems/need-some-change/1">Swap the array elements</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr&nbsp;</strong>of <strong>n&nbsp;</strong>positive integers. The task is to swap every <strong>i<sup>th</sup></strong> element of the array with <strong>(i+2)</strong><sup>th</sup> element.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 3
arr[] = 1 2 3
<strong>Output:
</strong>3 2 1
<strong>Explanation:
</strong>Swapping 1 and 3, makes the array 3 2 1. There is only one swap possible in this array.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 5
arr[] = 1 2 3 4 5
<strong>Output:
</strong>3 4 5 2 1
<strong>Explanation:
</strong>Swapping 1 and 3, makes the array 3 2 1 4 5.
Now, swapping 2 and 4, makes the array 3 4 1 2 5. <br>Again,swapping 1 and 5, makes the array 3 4 5 2 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Your task is to complete the function <strong>swapElements()</strong>, which should swap each<strong> ith</strong> element with <strong>(i+2)<sup>th</sup></strong> element.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n)<br><strong>Expected Auxilary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>6</sup><br>0 &lt;= arr<sub>i</sub> &lt;= 10<sup>9</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;