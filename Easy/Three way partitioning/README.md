<h2><a href="https://www.geeksforgeeks.org/problems/three-way-partitioning/1">Three way partitioning</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an <strong>array</strong> of size <strong>n</strong>&nbsp;and a range [<strong>a</strong>, <strong>b</strong>]. The task is to partition the array around the range such that the array is divided into three parts.<br>1) All elements smaller than <strong>a</strong> come first.<br>2) All elements in range <strong>a</strong> to <strong>b</strong> come next.<br>3) All elements greater than <strong>b</strong> appear in the end.<br>The individual elements of three sets can appear in any order. You are required to return the modified array.<br><br><strong>Note</strong>: The generated output is 1 if you modify the given array successfully.</span></p>
<p><strong><span style="font-size: 18px;">Geeky Challenge: </span></strong><span style="font-size: 18px;">Solve this problem in O(n) time complexity.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
n = 5
array[] = {1, 2, 3, 3, 4}
[a, b] = [1, 2]
<strong>Output:</strong> <br>1
<strong>Explanation</strong>: <br>One possible arrangement is: {1, 2, 3, 3, 4}. If you return a valid arrangement, output will be 1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
n = 6 
array[] = {1, 4, 3, 6, 2, 1}
[a, b] = [1, 3]
<strong>Output</strong>: <br>1
<strong>Explanation: <br></strong>One possible arrangement is: {1, 3, 2, 1, 4, 6}. If you return a valid arrangement, output will be 1.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task: </strong><br>You don't need to read input or print anything.&nbsp;The task is to complete the function <strong>threeWayPartition()</strong> which takes the array <strong>array</strong>,&nbsp;<strong>a</strong>, and <strong>b</strong> as input parameters and modifies the array in place according to the given conditions.</span><br><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span><br><br><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= n&nbsp;&lt;= 10</span><sup><span style="font-size: 15px;">6</span></sup><br><span style="font-size: 18px;">1 &lt;= array[i], a, b &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Yahoo</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;