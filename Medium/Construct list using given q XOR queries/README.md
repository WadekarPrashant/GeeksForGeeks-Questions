<h2><a href="https://www.geeksforgeeks.org/problems/construct-list-using-given-q-xor-queries/1">Construct list using given q XOR queries</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a list <strong>s</strong> that initially contains only a single value <strong>0</strong>. There will be <strong>q</strong> queries of the following types:</span></p>
<ul>
<li><span style="font-size: 18px;"><strong>0 x</strong>: Insert x in the list</span></li>
<li><span style="font-size: 18px;"><strong>1 x</strong>: For every element a in s, replace it with a ^ x. ('^' denotes the bitwise XOR operator)</span></li>
</ul>
<p><span style="font-size: 18px;">Return the sorted list after performing the given <strong>q</strong>&nbsp;queries.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>q = 5
queries[] = {{0, 6}, {0, 3}, {0, 2}, {1, 4}, {1, 5}}
<strong>Output:
</strong>1 2 3 7
<strong>Explanation:</strong>
[0] (initial value)
[0 6] (add 6 to list)
[0 6 3] (add 3 to list)
[0 6 3 2] (add 2 to list)
[4 2 7 6] (XOR each element by 4)
[1 7 2 3] (XOR each element by 5)
The sorted list after performing all the queries is [1 2 3 7]. </span>
</pre>
<div><span style="font-size: 18px;"><strong>Example 2:</strong></span></div>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>q = 3
queries[] = {{0, 2}, {1, 3}, {0, 5}}</span> <span style="font-size: 18px;">
<strong>Output :</strong>
1 3 5</span>
<span style="font-size: 18px;"><strong>Explanation:</strong>
[0] (initial value)
[0 2] (add 2 to list)
[3 1] (XOR each element by 3)
[3 1 5] (add 5 to list)
The sorted list after performing all the queries is [1 3 5].</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>constructList()</strong> which takes an integer <strong>q</strong> the number of queries and <strong>queries[]</strong> a list of lists of length 2 denoting the queries as input parameters and returns the final constructed list.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(q*log(q))<br><strong>Expected Auxiliary Space:</strong> O(l), where l is only used for output-specific requirements.</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ q ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;