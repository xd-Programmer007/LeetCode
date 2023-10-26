# Minimum Operations
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a number N.&nbsp;Find the minimum number of operations required to reach <strong>N</strong>&nbsp;starting from <strong>0</strong>. You have 2 operations available:</span></p>
<ul>
<li><span style="font-size: 18px;">Double the number </span></li>
<li><span style="font-size: 18px;">Add one to the number</span></li>
</ul>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong>
N = 8
<strong>Output:</strong> 4
<strong>Explanation</strong>: <br>0 + 1 = 1 --&gt; 1 + 1 = 2 --&gt; 2 * 2 = 4 --&gt; 4 * 2 = 8.
</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1&amp;title=Minimum%20Operations%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%208%0AOutput%3A%204%0AExplanation%3A%20%0A0%20%2B%201%20%3D%201%20--%3E%201%20%2B%201%20%3D%202%20--%3E%202%20*%202%20%3D%204%20--%3E%204%20*%202%20%3D%208.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input</strong>: 
N = 7
<strong>Output:</strong> 5
<strong>Explanation</strong>: <br>0 + 1 = 1 --&gt; 1 + 1 = 2 --&gt; 1 + 2 = 3 --&gt; 3 * 2 = 6 --&gt; 6 + 1 = 7.
</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1&amp;title=Minimum%20Operations%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%20%0AN%20%3D%207%0AOutput%3A%205%0AExplanation%3A%20%0A0%20%2B%201%20%3D%201%20--%3E%201%20%2B%201%20%3D%202%20--%3E%201%20%2B%202%20%3D%203%20--%3E%203%20*%202%20%3D%206%20--%3E%206%20%2B%201%20%3D%207.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minOperation()&nbsp;</strong>which accepts an integer <strong>N </strong>and return number of minimum operations required to reach N from 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(LogN)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N&nbsp;&lt;= 10<sup>6</sup></span></p></div>