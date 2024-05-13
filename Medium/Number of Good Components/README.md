<h2><a href="https://www.geeksforgeeks.org/problems/number-of-good-components--170647/1">Number of Good Components</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an undirected graph with <strong>v </strong>vertices(numbered from <strong>1</strong> to <strong>v</strong>) and <strong>e </strong>edges. Find the number of good components in the graph.<br>A component of the graph is good if and only if the component is fully connected.<br><strong>Note:&nbsp;</strong>A fully connected component is a subgraph of a given graph such that there's an edge between every pair of vertices in the component, the given graph can be a <strong>disconnected graph.&nbsp;</strong></span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
<img style="height: 239px; width: 350px;" src="https://media.geeksforgeeks.org/img-practice/good_comp_1-1656905170.png" alt="">

e=3 <br>v=3
edges<strong>=</strong>{{1, 2},{1, 3},{3, 2}}
<strong>Output: <br></strong>1</span><strong><span style="font-size: 18px;">
Explanation: <br></span></strong><span style="font-size: 18px;">We can see that there is only one component in the graph and in this component there is a edge between any two vertces</span><strong><span style="font-size: 18px;">.</span></strong></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong></span><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/713974/Web/Other/0b0c03cb-9f66-4c94-8900-8120a171f9a3_1685087973.png"><span style="font-size: 18px;">
e=5 <br>v=7
edges<strong>=</strong>{{1, 2},{7, 2},{3, 5},{3, 4},{4, 5}}
<strong>Output: <br></strong>2
</span><strong><span style="font-size: 18px;">Explanation: <br></span></strong><span style="font-size: 18px;">We can see that there are 3 components in the graph. For 1-2-7 there is no edge between 1 to 7, so it is not a fully connected component. Rest 2 are individually fully connected component.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>findNumberOfGoodComponent()</strong>, which<strong> </strong>takes an integer <strong>e</strong> and <strong>v </strong>and <strong>edges[][] </strong>as input parameters and returns an integer denoting the number of good components. </span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(v+e)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(depth of the graph)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong>1 &lt;= edges[i][0], edges[i][1] &lt;= v<br>1 ≤ v, e ≤ 10<sup>4</sup><br>All edges are unique</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;