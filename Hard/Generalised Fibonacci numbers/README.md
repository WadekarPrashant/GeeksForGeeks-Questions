<h2><a href="https://www.geeksforgeeks.org/problems/generalised-fibonacci-numbers1820/1">Generalised Fibonacci numbers</a></h2><h3>Difficulty Level : Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Consider the generalized Fibonacci number <strong>g</strong>, which is dependent on <strong>a</strong>, <strong>b</strong> and <strong>c</strong> as follows :-<br><strong>g</strong>(1) = 1, <strong>g</strong>(2) = 1. For any other number&nbsp;<strong>n, </strong><strong>g</strong>(n) = <strong>a*g</strong>(n-1) + <strong>b*g</strong>(n-2) + <strong>c</strong>.</span></p>
<p><span style="font-size: 18px;">For a given value of <strong>m</strong>, determine <strong>g(n)%m</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>a = </strong>3<br><strong>b = </strong>3<br><strong>c = </strong>3<br><strong>n = </strong>3<br><strong>m = </strong>5</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">4</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">g(1) = 1 and g(2) = 1 <br></span><span style="font-size: 18px;">g(3) = 3*g(2) + 3*g(1) + 3 = 3*1 + 3*1 + 3 = 9<br></span><span style="font-size: 18px;">We need to return answer modulo 5, so 9%5 = 4, is the answer.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>a = </strong>2<br><strong>b = </strong>2<br><strong>c = </strong>2<br><strong>n = </strong>4<br><strong>m = </strong>100</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">16</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">g(1) = 1 and g(2) = 1<br></span><span style="font-size: 18px;">g(3) = 2*g(2) + 2*g(1) + 2 = 2*1 + 2*1 + 2 = 6<br>g(4) = 2*g(3) + 2*g(2) + 2  = 2*6 + 2*1 + 2 = 16<br>We need to return answer modulo 100, so 16%100 = 16, is the answer.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>genFibNum()</strong> which takes 5 Integers <strong>a, b, c, n</strong>, and <strong>m</strong> as input and returns <strong>g(n)%m.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O( log(n) ).<br><strong>Expected Auxiliary Space:</strong> O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 &lt;= a, b, c, n, m &lt;= 10<sup>9</sup>+7</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Matrix</code>&nbsp;<code>Modular Arithmetic</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;