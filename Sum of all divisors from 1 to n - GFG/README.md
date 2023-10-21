# Sum of all divisors from 1 to n
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a positive integer <strong>N</strong>., The task is to find the value of <strong>Σ<sub>i from 1 to N </sub></strong></span><span style="font-size: 18px;"><strong>F(i)</strong> where function </span><em style="font-size: 18px;"><strong>F(i)</strong></em><span style="font-size: 18px;"> for the number </span><strong style="font-size: 18px;">i</strong><span style="font-size: 18px;"> is defined as the sum of all divisors of </span><strong style="font-size: 18px;">i</strong><span style="font-size: 18px;">.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre style="margin-bottom: 0px;"><strong><span style="font-size: 18px;">Input:
N = 4</span></strong>
<strong><span style="font-size: 18px;">Output:
</span></strong><span style="font-size: 18px;">15</span>
<span style="font-size: 18px;"><strong>Explanation:</strong>
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
ans = F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7
    = 15</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1&amp;title=Sum%20of%20all%20divisors%20from%201%20to%20n%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%204%0AOutput%3A%0A15%0AExplanation%3A%0AF(1)%20%3D%201%0AF(2)%20%3D%201%20%2B%202%20%3D%203%0AF(3)%20%3D%201%20%2B%203%20%3D%204%0AF(4)%20%3D%201%20%2B%202%20%2B%204%20%3D%207%0Aans%20%3D%20F(1)%20%2B%20F(2)%20%2B%20F(3)%20%2B%20F(4)%0A%20%20%20%20%3D%201%20%2B%203%20%2B%204%20%2B%207%0A%20%20%20%20%3D%2015" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="margin-bottom: 0px;"><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">N = 5</span>
<strong><span style="font-size: 18px;">Output:
</span></strong><span style="font-size: 18px;">21</span>
<strong><span style="font-size: 18px;">Explanation:
</span></strong><span style="font-size: 18px;">F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6
ans = F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6
    = 21</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1&amp;title=Sum%20of%20all%20divisors%20from%201%20to%20n%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%205%0AOutput%3A%0A21%0AExplanation%3A%0AF(1)%20%3D%201%0AF(2)%20%3D%201%20%2B%202%20%3D%203%0AF(3)%20%3D%201%20%2B%203%20%3D%204%0AF(4)%20%3D%201%20%2B%202%20%2B%204%20%3D%207%0AF(5)%20%3D%201%20%2B%205%20%3D%206%0Aans%20%3D%20F(1)%20%2B%20F(2)%20%2B%20F(3)%20%2B%20F(4)%20%2B%20F(5)%0A%20%20%20%20%3D%201%20%2B%203%20%2B%204%20%2B%207%20%2B%206%0A%20%20%20%20%3D%2021" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>sumOfDivisors()</strong>&nbsp;which takes an integer <strong>N</strong> as an input parameter and returns an integer.<br><br><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>6</sup></span></p></div>