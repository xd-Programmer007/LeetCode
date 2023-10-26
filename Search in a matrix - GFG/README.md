# Search in a matrix
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix <strong>mat</strong>[][] of size <strong>N</strong>&nbsp;x&nbsp;<strong>M</strong>, where every row and column is sorted in increasing order, and a number <strong>X</strong> is given. The task is to find whether element <strong>X</strong> is present in the matrix or not.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre style="margin-bottom: 0px;"><span style="font-size:18px"><strong>Input</strong>:
N = 3, M = 3
mat[][] = 3 30 38 
         44 52 54 
         57 60 69
X = 62
<strong>Output</strong>:
0
<strong>Explanation</strong>:
62 is not present in the
matrix, so output is 0</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1&amp;title=Search%20in%20a%20matrix%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%203%2C%20M%20%3D%203%0Amat%5B%5D%5B%5D%20%3D%203%2030%2038%20%0A%20%20%20%20%20%20%20%20%2044%2052%2054%20%0A%20%20%20%20%20%20%20%20%2057%2060%2069%0AX%20%3D%2062%0AOutput%3A%0A0%0AExplanation%3A%0A62%20is%20not%20present%20in%20the%0Amatrix%2C%20so%20output%20is%200" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre style="margin-bottom: 0px;"><span style="font-size:18px"><strong>Input</strong>:
N = 1, M = 6
mat[][]<strong> </strong>= 18 21 27 38 55 67
X = 55
<strong>Output</strong>:
1
<strong>Explanation</strong>:
55 is present in the
matrix at 5th cell.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/search-in-a-matrix17201720/1&amp;title=Search%20in%20a%20matrix%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%201%2C%20M%20%3D%206%0Amat%5B%5D%5B%5D%20%3D%2018%2021%2027%2038%2055%2067%0AX%20%3D%2055%0AOutput%3A%0A1%0AExplanation%3A%0A55%20is%20present%20in%20the%0Amatrix%20at%205th%20cell." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. You just have to complete the function&nbsp;matSearch()&nbsp;which takes a 2D matrix&nbsp;<strong>mat</strong>[][],&nbsp;its dimensions <strong>N</strong> and <strong>M</strong> and integer <strong>X</strong> as inputs and returns 1 if the element <strong>X</strong> is present in the matrix and 0 otherwise.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity</strong>:&nbsp;O(N+M).<br>
<strong>Expected Auxiliary Space</strong>:&nbsp;O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints</strong>:<br>
1 &lt;= N, M &lt;= 1005<br>
1 &lt;= mat[][] &lt;= 10000000<br>
1&lt;= X &lt;= 10000000</span></p>
</div>