<h2><a href="https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1">Shortest path in Undirected Graph</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" bis_skin_checked="1"><p><span style="font-size: 18px;">You are given an <strong>Undirected Graph</strong> having <strong>unit weight </strong>of the edges, find the shortest path<strong> </strong>from<strong> src </strong>to all the vertex and if it is <strong>unreachable</strong> to reach any vertex, then return<strong> -1</strong> for that vertex.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 9, m = 10
edges=[[0,1],[0,3],[3,4],[4,5],[5,6],[1,2],[2,6],[6,7],[7,8],[6,8]] 
src=0
<strong>Output:</strong>
0 1 2 1 2 3 3 4 4<br></span><img style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif; font-size: 18px;" src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/711976/Web/Other/blobid1_1712813311.png" alt="" width="236" height="251">
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4, m = 2
edges=[[1,3],[3,0]] 
src=3
<strong>Output:</strong>
1 1 -1 0<br></span><img style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;" src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/711976/Web/Other/blobid3_1712814761.png" alt="">
</pre>
<p><span style="font-size: 18px;"><strong>Constraint:</strong><br>1&lt;=n,m&lt;=10<sup>4</sup><br>0&lt;=edges[i][j]&lt;=n-1</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(N + E), where N is the number of nodes and E is the edges</span><br><span style="font-size: 18px;"><strong>Expected Space Complexity: </strong>O(N)</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Algorithms</code>&nbsp;<code>BFS</code>&nbsp;<code>Queue</code>&nbsp;