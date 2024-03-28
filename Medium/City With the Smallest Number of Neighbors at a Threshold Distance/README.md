<h2><a href="https://www.geeksforgeeks.org/problems/city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/1">City With the Smallest Number of Neighbors at a Threshold Distance</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There are <strong>n</strong> cities labeled from 0 to n-1 with <strong>m </strong>edges connecting them. Given the array <strong>edges</strong>&nbsp;where <strong>edges[i] = [from<sub>i&nbsp;</sub>, to<sub>i ,</sub>weight<sub>i</sub>]<sub>&nbsp;</sub></strong>&nbsp;represents a <strong>bidirectional </strong>and <strong>weighted edge </strong>between cities <strong>from<sub>i</sub>&nbsp;</strong>and <strong>to<sub>i</sub></strong>, and given the integer <strong>distanceThreshold</strong>. You need to find out a city with the <strong>smallest number </strong>of cities that are reachable through some path and whose distance is&nbsp;<strong>at most</strong>&nbsp;<strong>Threshold Distance.</strong>&nbsp;If there are multiple such cities, our answer will&nbsp;be the city with the <strong>greatest label</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> The distance of a path connecting cities <em><strong>i</strong></em>&nbsp;and&nbsp;<em><strong>j</strong></em> is equal to the sum of the edge's weights along that path.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">n = 4, m = 4</span>
<span style="font-size: 18px;">edges = [[0, 1, 3],<br>         [1, 2, 1], <br>         [1, 3, 4],  <br>         [2, 3, 1]]</span>
<span style="font-size: 18px;">distanceThreshold = 4</span>
<strong><span style="font-size: 18px;">Output:<br></span></strong><span style="font-size: 18px;">3</span>
<strong><span style="font-size: 18px;">Explaination:<br><img src="https://media.geeksforgeeks.org/img-practice/PROD/addEditProblem/711146/Web/Other/db9aa4c2-8a65-4b18-b6ad-7034096be600_1684840736.png" width="305" height="296"><br></span></strong><span style="font-size: 18px;">The neighboring cities at a distanceThreshold = 4 for each city are:
City 0 -&gt; [City 1, City 2]&nbsp;
City 1 -&gt; [City 0, City 2, City 3]&nbsp;
City 2 -&gt; [City 0, City 1, City 3]&nbsp;
City 3 -&gt; [City 1, City 2]&nbsp;
Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, but we have to return city 3 since it has the greatest number.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:&nbsp;</span></strong><span style="font-size: 18px;"><span style="font-size: 18px;"><br>n = 5, m = 6<br>edges = [[0, 1, 2],
         [0, 4, 8],<br>         [1, 2, 3], <br>         [1, 4, 2], <br>         [2, 3, 1],<br>         [3, 4, 1]]<br>distanceThreshold = 2.<br></span></span><span style="font-size: 18px;"><strong style="font-size: 18px;">Output:<br></strong><span style="font-size: 18px;">0<br></span><strong style="font-size: 18px;">Explaination:<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/711146/Web/Other/blobid0_1709737447.png" width="310" height="273"></strong><br><span style="font-size: 18px;">The neighboring cities at a distanceThreshold = 2 for each city are:
City 0 -&gt; [City 1] 
City 1 -&gt; [City 0, City 4] 
City 2 -&gt; [City 3, City 4] 
City 3 -&gt; [City 2, City 4]
City 4 -&gt; [City 1, City 2, City 3] 
The city 0 has 1 neighboring city at a distanceThreshold = 2.<br></span></span></pre>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findCity( )&nbsp;</strong>which takes a number of nodes <strong>n, </strong>total number of edges <strong>m</strong>&nbsp;and vector of <strong>edges</strong> and <strong>distanceThreshold</strong>. and return the city with the smallest number of cities that are reachable through some path and whose distance is <strong>at most</strong> Threshold Distance. If there are multiple such cities, return the city with the greatest label.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n<sup>2</sup> + length(edges)*nlog(n) )</span><br><span style="font-size: 18px;"><strong>Expected Auxiliary Space:&nbsp;&nbsp;</strong>O(n<sup>3</sup>)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&nbsp; ≤&nbsp; n ≤&nbsp; 100<br>1 &lt;= m &lt;= n*(n-1)/2<br>length(edges[i]) == 3<br>0 &lt;= from<sub>i&nbsp;</sub>&lt; to<sub>i</sub>&nbsp;&lt; n<br>1 &lt;= weight<sub>i </sub>distanceThreshold &lt;= 10<sup>4</sup><br>All pairs (from<sub>i</sub>, to<sub>i</sub>) are distinct</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Graph</code>&nbsp;<code>Shortest Path</code>&nbsp;<code>BFS</code>&nbsp;<code>Disjoint Set</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;