<h2><a href="https://www.geeksforgeeks.org/problems/pairs-violating-bst-property--212515/1">Pairs violating the BST property</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree with&nbsp;<strong>n</strong>&nbsp;nodes, find the number of&nbsp;<strong>pairs violating the BST property</strong>.<br></span><span style="font-size: 18px;">BST has the following properties:-</span></p>
<ul>
<li><span style="font-size: 18px;">Every node is greater than its left child and less than its right child.</span></li>
<li><span style="font-size: 18px;">Every node is greater than the maximum value of in its left subtree and less than the minimum value in its right subtree.</span></li>
<li><span style="font-size: 18px;">The maximum in the left sub-tree must be less than the minimum in the right subtree.</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>
n = 5
Input tree
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/861883/Web/Other/blobid0_1709054479.png" alt="" width="351" height="245">    
<strong>Output :</strong>
5
<strong>Explanation : </strong>
Pairs violating BST property are:-
(10,50), 10 should be greater than its left child value.
(40,30), 40 should be less than its right child value.
(50,20), (50,30) and (50,40), maximum of left subtree of 10 is 50 greater than 20, 30 and 40 of its right subtree.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input : </strong>
n = 6<br>Input tree
<img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/861883/Web/Other/blobid1_1709055216.png" alt="" width="402" height="219">
<strong>Output :</strong>
5  
<strong>Explanation :</strong>
Pairs violating BST property are:-
(80,30), greater than its right child.
(80,60), greater than node on its right side.
(80,70), greater than node on its right side.
(30,60), the value of 3 is not more than its left child.
(40,30), the value in the left subtree is greater than the value of the right subtree.</span></pre>
<div><strong><span style="font-size: 18px;">Your task :</span></strong></div>
<div><span style="font-size: 18px;">You don't have to read input or print anything. Your task is to complete the function&nbsp;<strong>pairsViolatingBST</strong><strong>()</strong>&nbsp;that takes the root of the tree and&nbsp;<strong>n</strong>&nbsp;as input and returns number of pairs violating BST property.<br></span></div>
<div>&nbsp;</div>
<div><strong><span style="font-size: 18px;">Expected Time Complexity:&nbsp;</span></strong><span style="font-size: 18px;">O(n*logn)</span></div>
<div><strong><span style="font-size: 18px;">Expected Space Complexity:&nbsp;</span></strong><span style="font-size: 18px;">O(n)</span></div>
<div>&nbsp;</div>
<div><strong><span style="font-size: 18px;">Your Task :</span></strong></div>
<div><span style="font-size: 18px;">1 &lt;= n &lt;= 2*10<sup>4</sup></span></div>
<div><span style="font-size: 18px;">-10<sup>9</sup>&nbsp;&lt;= node-&gt;data &lt;= 10<sup>9</sup></span></div></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Merge Sort</code>&nbsp;<code>Traversal</code>&nbsp;<code>Data Structures</code>&nbsp;