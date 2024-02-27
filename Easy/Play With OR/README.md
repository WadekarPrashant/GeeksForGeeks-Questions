<h2><a href="https://www.geeksforgeeks.org/problems/play-with-or5515/1">Play With OR</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array <strong>arr[] </strong>of length <strong>n</strong>, you have to <strong>re-construct the same</strong> array <strong>arr[] in-place</strong>. The <strong>arr[i]</strong> after reconstruction will become <strong>arr[i] OR arr[i+1], </strong>where <strong>OR </strong>is <a href="https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/" target="_blank" rel="noopener"><strong>bitwise or</strong></a>. If for some <strong>i</strong>, <strong>i+1</strong> does not exists, then do not change <strong>arr[i]</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :<br></strong>n = 5<br>arr[] = {10, 11, 1, 2, 3}
<strong>Output :</strong><br>11 11 3 3 3
<strong>Explanation:</strong>
At index 0, arr[0] or arr[1] = 11
At index 1, arr[1] or arr[2] = 11
At index 2, arr[2] or arr[3] = 3
...
At index 4, No element is left So, it will remain as it is.
New Array will be {11, 11, 3, 3, 3}.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :<br></strong>n= 4<br>arr[] = {5, 9, 2, 6} <strong>
Output :</strong><br>13 11 6 6<br><strong>Explanation:<br></strong></span><span style="font-size: 18px;">At index 0, arr[0] or arr[1] = 13.<br>At index 1, arr[1] or arr[2] = 11.<br>At index 2, arr[2] or arr[3] = 6.<br>At index 3, No element is left So, it will remain as it is.<br>New Array will be {13, 11, 6, 6}.</span></pre>
<p><span style="font-size: 18px;"><strong style="font-size: 18px;">Your Task:</strong><br><span style="font-size: 18px;">You are required to implement the function <strong>game_with_number()</strong>, which takes an array <strong>arr</strong>, representing values at each index, and the size of the array <strong>n</strong>. The function should modify the elements of the <strong>same array arr[] in-place </strong>by replacing them with the values obtained by performing the <strong>bitwise OR</strong> operation on consecutive elements.</span><br></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong></span><span style="font-size: 18px;">1 ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>7</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;