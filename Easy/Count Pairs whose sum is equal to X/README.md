<h2><a href="https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1">Count Pairs whose sum is equal to X</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two linked list <strong>head</strong><strong>1</strong><strong>&nbsp;</strong>and <strong>head2</strong> with <strong>distinct </strong>elements, determine the <strong>count of all distinct pairs</strong> from both lists whose sum is equal to the given value <strong>x</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: A valid pair would be in the form <strong>(x, y) </strong>where <strong>x</strong> is from first linked list and <strong>y</strong> is from second linked list.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>head1 = 1-&gt;2-&gt;3-&gt;4-&gt;5-&gt;6
head2 = 11-&gt;12-&gt;13
x = 15
<strong>Output: </strong>3<strong>
Explanation: </strong>There are total 3 pairs whose sum is 15 : (4,11) , (3,12) and (2,13)</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>head1 = 7-&gt;5-&gt;1-&gt;3
head2 = 3-&gt;5-&gt;2-&gt;8
x = 10
<strong>Output: </strong>2<strong>
Explanation: </strong>There are total 2 pairs whose sum is 10 : (7,3) and (5,5)</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to implement the given function&nbsp;<strong>countPairs() </strong> that take two linked list <strong>head1</strong> and <strong>head</strong><strong>2 </strong> and return the <strong>count of distinct</strong> <strong>pairs</strong> whose sum is equal to <strong>x</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(length(head1)+lenght(head2)).<br><strong>Expected Auxiliary Space:</strong> O(length(head1)) or O(length(head2)).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=length(head1), lenght(head2)&lt;=10<sup>5</sup><br>1 &lt;= Value of elements of&nbsp; linked lists &lt;= 10<sup>9</sup><br>1&lt;= x &lt;= 10<sup>9<br></sup></span><span style="font-size: 18px;"><strong>Note</strong> : All elements in each linked list are unique.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;