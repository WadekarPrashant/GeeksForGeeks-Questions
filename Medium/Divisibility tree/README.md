<h2><a href="https://www.geeksforgeeks.org/problems/divisibility-tree1902/1">Divisibility tree</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a tree with n nodes where <strong>n</strong> is <strong>even</strong>. The tree is numbered from 1 to n, has n - 1 edges and is rooted at node 1. </span><span style="font-size: 18px;">Your task is to eliminate the <strong>maximum </strong>number of edges resulting in a set of disjoint trees where the number of nodes in each tree is divisible by <strong>2</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: <br></strong><span style="font-size: 18px;">n = 10
edges = {{2,1},{3,1},{4,3},{5,2},{6,1},{7,2},{8,6},{9,8},{10,8}}
</span><strong style="font-size: 18px;">Output:<br></strong><span style="font-size: 18px;">2
</span><strong style="font-size: 18px;">Explanation:<br></strong><span style="font-size: 18px;">Original tree:<br>
</span></span><img src="https://contribute.geeksforgeeks.org/wp-content/uploads/1466090203-2e0cf4f1be-even.png"><span style="font-size: 18px;"> &nbsp;&nbsp;
After removing edge 1-3 and 1-6, each remaining component consists of even number of nodes. <br>
</span><img src="https://contribute.geeksforgeeks.org/wp-content/uploads/image1-1.png">
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: <br></strong><span style="font-size: 18px;">n = 4
edges = {{2,1},{4,2},{1,3}}
</span><strong style="font-size: 18px;">Output:<br></strong><span style="font-size: 18px;">1
</span><strong style="font-size: 18px;">Explanation:<br></strong><span style="font-size: 18px;">After removing 2-1, each remaining component consists of even number of nodes. </span><br></span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read or print anyhting. Your task is to complete the function minimumEdgeRemove() which takes n and edges as input parameters and returns the maximum number of edges that need to be removed from the given tree.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(n)<br><strong>Expected Space Complexity: </strong>O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup><br>edges.length == n - 1<br>1 &lt;= edges[i][0], </span><span style="font-size: 18px;">edges[i][1] &lt;= n</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;