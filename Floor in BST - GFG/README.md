# Floor in BST
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a BST(Binary Search Tree) with <strong>n</strong>&nbsp;number of nodes and value <strong>x</strong>. your task is to find the greatest value node of the BST which is smaller than or equal to x.<br><strong>Note:</strong> when x is smaller than the smallest node of BST then returns -1.</span></p>
<p><strong><span style="font-size: 18px;">Example:</span></strong></p>
<pre style="margin-bottom: 0px;"><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;">
n = 7               2
                     \
                      81
                    /     \
                 42       87
                   \       \
                    66      90
                   /
                 45
x = 87
<strong>Output:</strong>
87
<strong>Explanation:</strong>
87 is present in tree so floor will be 87.</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/floor-in-bst/1&amp;title=Floor%20in%20BST%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0An%20%3D%207%20%20%20%20%20%20%20%20%20%20%20%20%20%20%202%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%5C%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2081%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2F%20%20%20%20%20%5C%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2042%20%20%20%20%20%20%2087%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%5C%20%20%20%20%20%20%20%5C%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2066%20%20%20%20%20%2090%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2F%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2045%0Ax%20%3D%2087%0AOutput%3A%0A87%0AExplanation%3A%0A87%20is%20present%20in%20tree%20so%20floor%20will%20be%2087.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:</strong>
n = 4                     6
                           \
                            8
                          /   \
                        7       9
x = 11
<strong>Output:</strong>
9</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/floor-in-bst/1&amp;title=Floor%20in%20BST%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0An%20%3D%204%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%206%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%5C%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%208%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2F%20%20%20%5C%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%207%20%20%20%20%20%20%209%0Ax%20%3D%2011%0AOutput%3A%0A9%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><strong><span style="font-size: 18px;">Your Task:-</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Complete the function <strong>floor() </strong>which takes<strong>&nbsp;</strong>the integer&nbsp;<strong>n</strong>&nbsp;and BST&nbsp;and integer x returns the floor&nbsp;value.</span></p>
<p><strong><span style="font-size: 18px;">Constraint:</span></strong><br><span style="font-size: 18px;">1 &lt;= Noda data &lt;= 10<sup>9</sup><br>1 &lt;= n &lt;= 10<sup>5</sup></span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Space Complexity:</strong> O(1)</span></p></div>