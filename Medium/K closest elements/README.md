<h2><a href="https://www.geeksforgeeks.org/problems/k-closest-elements3619/1">K closest elements</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted array of unique elements in increasing order, <strong>arr</strong>[] of <strong>n</strong> integers, and a value <strong>x</strong>. Find the K closest elements to <strong>x</strong> in <strong>arr</strong>[].<br>Keep the following points in mind:</span></p>
<ol>
<li><span style="font-size: 18px;">If&nbsp;<strong>x</strong>&nbsp;is present in the array, then it need not be considered. </span></li>
<li><span style="font-size: 18px;">If two elements have the same difference as <strong>x</strong>, the greater element is prioritized. </span></li>
<li><span style="font-size: 18px;">If sufficient elements are not present on the right side, take elements from the left and vice versa.</span><br>&nbsp;</li>
</ol>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 13
arr[] = {12, 16, 22, 30, 35, 39, 42, 
         45, 48, 50, 53, 55, 56}
k = 4, x = 35
<strong>Output:</strong> 39 30 42 45
<strong>Explanation:</strong> 
First closest element to 35 is 39.
Second closest element to 35 is 30.
Third closest element to 35 is 42.
And fourth closest element to 35 is 45.
</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
arr[] = {1, 2, 3, 6, 10}
k = 3, x = 4
<strong>Output:</strong> 3 6 2
<strong>Explanation:</strong>&nbsp;
First closest element is 3.
There are two elements 2 and 6 for which 
the difference with 4 is same i.e. 2.
So first take greatest number 6 
then the lower number 2.
</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Complete the function&nbsp;<strong>printKClosest()</strong>&nbsp;which takes <strong>arr[]</strong>, <strong>n</strong>, <strong>k,</strong> and <strong>x</strong><strong>&nbsp;</strong>as input parameters and returns an array of integers containing the K closest elements to&nbsp;</span><strong style="font-size: 18px;">x</strong><span style="font-size: 18px;">&nbsp;in <strong>arr</strong>[].</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(log n + k)<br><strong>Expected Auxiliary Space:</strong> O(k)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ k ≤ n<br>1 ≤ x ≤ 10<sup>6</sup></span><br><span style="font-size: 18px;">1 ≤ arr[i] ≤ 10</span><sup>6</sup></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>OYO Rooms</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Binary Search</code>&nbsp;<code>Algorithms</code>&nbsp;<code>STL</code>&nbsp;<code>priority-queue</code>&nbsp;