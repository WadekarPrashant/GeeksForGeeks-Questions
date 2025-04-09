<h2><a href="https://www.geeksforgeeks.org/problems/bridge-edge-in-graph/1">Bridge edge in a graph</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">Given an undirected graph with <strong>V</strong> vertices numbered from <strong>0 to V-1</strong> and <strong>E </strong>edges, represented by 2d array <strong>edges[][]</strong>, where edges[i]=[u,v] represents the edge between the vertices u and v. Determine whether a specific edge between two vertices (c, d) is a bridge.</span></p>
<p><strong><span style="font-size: 18px;">Note:</span></strong></p>
<ul>
<li><span style="font-size: 18px;">An edge is called a&nbsp;<strong>bridge</strong>&nbsp;if removing it increases the number of&nbsp;<strong>connected components</strong>&nbsp;of the graph.</span></li>
<li><span style="font-size: 18px;">if there’s only one path between&nbsp;<strong>c</strong>&nbsp;and&nbsp;<strong>d</strong>&nbsp;(which is the edge itself), then that edge is a&nbsp;<strong>bridge</strong>.</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>V = 4, edges[][] = [[0, 1], [1, 2], [2, 3]], c = 1, d = 2<br></span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700463/Web/Other/blobid1_1744198886.jpg" width="369" height="256">
<span style="font-size: 18px;"><strong>Output: </strong>true
<strong>Explanation</strong>: </span><span style="font-size: 18px;">From the graph, we can clearly see that blocking the edge 1-2 will result in disconnection of the graph.<br>Hence, it is a Bridge.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> V = 5, edges[][] = [[0, 1], [0, 3], [1, 2], [2, 0], [3, 4]], c = 0, d = 2</span>
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700463/Web/Other/blobid2_1744199181.jpg" width="371" height="254"> <br><span style="font-size: 18px;"><strong>Output: </strong>false
<strong>Explanation</strong>:
</span><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700463/Web/Other/blobid3_1744199208.jpg" width="371" height="263"> <br><span style="font-size: 18px;">Blocking the edge between nodes 0 and 2 won't affect the connectivity of the graph.
So, it's not a Bridge Edge. All the Bridge Edges in the graph are marked with a green line in the above image.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V, E </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> 10<sup>5</sup><br>0 </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> c, d </span> <span style="font-size: 18px;">≤</span> <span style="font-size: 18px;"> V-1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;