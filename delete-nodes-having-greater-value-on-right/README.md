<h2><a href="https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1">Delete Nodes with Greater on Right</a></h2>
<h3>Difficulty: Easy</h3>
<hr>
<div class="problem-statement">
<p>Given a singly linked list, remove all nodes that have a node with a greater value anywhere to their right in the list. Return the head of the modified linked list.</p>
<p><span style="font-size: 12pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 12pt;"><strong>Input: </strong>LinkedList = 12-&gt;15-&gt;10-&gt;11-&gt;5-&gt;6-&gt;2-&gt;3
<strong>Output: </strong>15-&gt;11-&gt;6-&gt;3<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700101/Web/Other/blobid0_1723577084.png" width="430" height="97"><strong>
Explanation: </strong>Since, 12, 10, 5 and 2 are the elements which have greater elements on the following nodes. So, after deleting them, the linked list would like be 15, 11, 6, 3.
</span></pre>
<pre><span style="font-size: 12pt;"><strong>Input: </strong>LinkedList = 10-&gt;20-&gt;30-&gt;40-&gt;50-&gt;60
<strong>Output: </strong>60<br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700101/Web/Other/blobid1_1723577204.png" width="430" height="97"><br><strong>Explanation: </strong>All the nodes except the last node has a greater value node on its right, so all the nodes except the last node must be removed.</span></pre>
<p><span style="font-size: 12pt;"><strong>Constraints:</strong><br>1 ≤ size of linked list ≤ 10<sup>6</sup><br>1 ≤ element of linked list ≤ 10<sup>6</sup><br><br><strong>Note: Try to solve the problem without using any extra space.</strong></span></p>
</div>

---
<p align="center">
  <a href="https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1">View Problem on GeeksforGeeks</a>
</p>