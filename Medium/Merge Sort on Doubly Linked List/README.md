<h2><a href="https://www.geeksforgeeks.org/problems/merge-sort-on-doubly-linked-list/1">Merge Sort on Doubly Linked List</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given Pointer/Reference to the <strong>head</strong> of a<strong> doubly linked list</strong> of&nbsp;<strong>n</strong> nodes, the task is to <strong>Sort </strong>the<strong> given doubly linked list </strong>using<strong> Merge Sort&nbsp;</strong>in both <strong>non-decreasing</strong> and <strong>non-increasing</strong> order.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 8
value[] = {7,3,5,2,6,4,1,8}
<strong>Output:
</strong>1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1<strong>
Explanation: </strong>After sorting the given
linked list in both ways, resultant
matrix will be as given in the first
two line of output, where first line
is the output for non-decreasing
order and next line is for non-
increasing order.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 5
value[] = {9,15,0,-1,0}
<strong>Output:</strong>
-1 0 0 9 15
15 9 0 0 -1<strong>
Explanation: </strong>After sorting the given
linked list in both ways, the
resultant list will be -1 0 0 9 15
in non-decreasing order and 
15 9 0 0 -1 in non-increasing order.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>sortDoubly</strong>() which takes reference to the <strong>head</strong> of the doubly linked and <strong>Sort</strong> the given doubly linked list using <strong>Merge Sort</strong> in both <strong>non-decreasing </strong>and<strong> non-increasing</strong>. The <strong>printing </strong>is done <strong>automatically </strong>by the<strong> driver code</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(nlogn)<br><strong>Expected Space Complexity:&nbsp;</strong>O(logn)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>4<br></sup>-10<sup>5</sup>&nbsp;&lt;= values[i] &lt;= 10<sup>5<br></sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>doubly-linked-list</code>&nbsp;<code>Linked List</code>&nbsp;<code>Sorting</code>&nbsp;<code>Merge Sort</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;