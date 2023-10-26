# Spirally traversing a matrix
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a&nbsp;matrix&nbsp;of size r*c. Traverse the matrix in spiral form.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre style="margin-bottom: 0px;"><span style="font-size:18px"><strong>Input</strong>:
r = 4, c = 4
matrix[][] = {{1, 2, 3, 4},
&nbsp;          {5, 6, 7, 8},
&nbsp;          {9, 10, 11, 12},
&nbsp;          {13, 14, 15,16}}
<strong>Output</strong>: 
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
<strong>Explanation</strong>:
</span><img alt="" src="https://www.geeksforgeeks.org/wp-content/uploads/spiral-matrix.png" style="height:242px; width:400px"></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1&amp;title=Spirally%20traversing%20a%20matrix%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0Ar%20%3D%204%2C%20c%20%3D%204%0Amatrix%5B%5D%5B%5D%20%3D%20%7B%7B1%2C%202%2C%203%2C%204%7D%2C%0A%C2%A0%20%20%20%20%20%20%20%20%20%20%7B5%2C%206%2C%207%2C%208%7D%2C%0A%C2%A0%20%20%20%20%20%20%20%20%20%20%7B9%2C%2010%2C%2011%2C%2012%7D%2C%0A%C2%A0%20%20%20%20%20%20%20%20%20%20%7B13%2C%2014%2C%2015%2C16%7D%7D%0AOutput%3A%20%0A1%202%203%204%208%2012%2016%2015%2014%2013%209%205%206%207%2011%2010%0AExplanation%3A%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre style="margin-bottom: 0px;"><span style="font-size:18px"><strong>Input</strong>:
r = 3, c = 4  
matrix[][] = {{1, 2, 3, 4},
&nbsp;          {5, 6, 7, 8},
&nbsp;          {9, 10, 11, 12}}
<strong>Output</strong>: 
1 2 3 4 8 12 11 10 9 5 6 7
<strong>Explanation</strong>:
Applying same technique as shown above, 
output for the 2nd testcase will be 
1 2 3 4 8 12 11 10 9 5 6 7.</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1&amp;title=Spirally%20traversing%20a%20matrix%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0Ar%20%3D%203%2C%20c%20%3D%204%20%20%0Amatrix%5B%5D%5B%5D%20%3D%20%7B%7B1%2C%202%2C%203%2C%204%7D%2C%0A%C2%A0%20%20%20%20%20%20%20%20%20%20%7B5%2C%206%2C%207%2C%208%7D%2C%0A%C2%A0%20%20%20%20%20%20%20%20%20%20%7B9%2C%2010%2C%2011%2C%2012%7D%7D%0AOutput%3A%20%0A1%202%203%204%208%2012%2011%2010%209%205%206%207%0AExplanation%3A%0AApplying%20same%20technique%20as%20shown%20above%2C%20%0Aoutput%20for%20the%202nd%20testcase%20will%20be%20%0A1%202%203%204%208%2012%2011%2010%209%205%206%207.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>

<p><br>
<strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You dont need to read input or print anything.&nbsp;Complete the function <strong>spirallyTraverse()&nbsp;</strong>that takes <strong>matrix, r </strong>and<strong> c&nbsp;</strong>as input&nbsp;parameters<strong> </strong>and returns a list of integers denoting the spiral traversal of matrix.&nbsp;<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(r*c)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(r*c), for returning the answer only.<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= r, c &lt;= 100<br>
0 &lt;= matrix<sub>i</sub> &lt;= 100</span></p>
</div>