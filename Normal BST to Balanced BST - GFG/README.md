# Normal BST to Balanced BST
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a Binary Search Tree, modify the given BST such that it is balanced and has minimum possible height. Return the balanced BST.</span></p>
<p><span style="font-size: 14pt;"><strong>Example1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 14pt;"><strong>Input:</strong>
       30
      /
     20
    /
   10<br></span><span style="font-size: 14pt;"><strong>Output:</strong>
     20
   /   \
 10     30
</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1&amp;title=Normal%20BST%20to%20Balanced%20BST%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0A%20%20%20%20%20%20%2030%0A%20%20%20%20%20%20%2F%0A%20%20%20%20%2020%0A%20%20%20%20%2F%0A%20%20%2010%0AOutput%3A%0A%20%20%20%20%2020%0A%20%20%20%2F%20%20%20%5C%0A%2010%20%20%20%20%2030%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 14pt;"><strong>Example2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 14pt;"><strong>Input:</strong>
         4
        /
       3
      /
     2
    /
   1
<strong>Output:</strong>
      3            3           2
    /  \         /  \        /  \
   1    4   OR  2    4  OR  1    3   
    \          /                  \ <br>     2        1                    4</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1&amp;title=Normal%20BST%20to%20Balanced%20BST%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0A%20%20%20%20%20%20%20%20%204%0A%20%20%20%20%20%20%20%20%2F%0A%20%20%20%20%20%20%203%0A%20%20%20%20%20%20%2F%0A%20%20%20%20%202%0A%20%20%20%20%2F%0A%20%20%201%0AOutput%3A%0A%20%20%20%20%20%203%20%20%20%20%20%20%20%20%20%20%20%203%20%20%20%20%20%20%20%20%20%20%202%0A%20%20%20%20%2F%20%20%5C%20%20%20%20%20%20%20%20%20%2F%20%20%5C%20%20%20%20%20%20%20%20%2F%20%20%5C%0A%20%20%201%20%20%20%204%20%20%20OR%20%202%20%20%20%204%20%20OR%20%201%20%20%20%203%20%20%20%0A%20%20%20%20%5C%20%20%20%20%20%20%20%20%20%20%2F%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%5C%20%0A%20%20%20%20%202%20%20%20%20%20%20%20%201%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%204" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 14pt;"><strong><br>Your Task:</strong><br>The task is to complete the function <strong>buildBalancedTree()</strong> which takes root as the input argument and returns the root of tree after converting the given BST&nbsp;into a balanced BST with minimum possible height. The driver code will print the height of the updated tree in output itself. </span><br><span style="font-size: 14pt;">&nbsp;</span><br><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Auxiliary Space: </strong>O(N)<br>Here N denotes total number of nodes in given BST.</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= Node data &lt;= 10<sup>9</sup></span></p></div>