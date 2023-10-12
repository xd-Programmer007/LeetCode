# Duplicate subtree in Binary Tree
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree, find out whether it&nbsp;contains a duplicate sub-tree of size two&nbsp;or more, or not.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> Two same leaf nodes are not considered as subtree as size of a leaf node is one.&nbsp;</span><br><br><span style="font-size: 18px;"><strong>Example 1 :</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input : </strong>
               1
             /   \ 
           2       3
         /   \       \    
        4     5       2     
                     /  \    
                    4    5
<strong>Output :</strong> 1
<strong>Explanation : </strong>
    2     
  /   \    
 4     5
is the duplicate sub-tree.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1&amp;title=Duplicate%20subtree%20in%20Binary%20Tree%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%20%3A%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%201%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%2F%20%20%20%5C%20%0A%20%20%20%20%20%20%20%20%20%20%202%20%20%20%20%20%20%203%0A%20%20%20%20%20%20%20%20%20%2F%20%20%20%5C%20%20%20%20%20%20%20%5C%20%20%20%20%0A%20%20%20%20%20%20%20%204%20%20%20%20%205%20%20%20%20%20%20%202%20%20%20%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%2F%20%20%5C%20%20%20%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%204%20%20%20%205%0AOutput%20%3A%201%0AExplanation%20%3A%20%0A%20%20%20%202%20%20%20%20%20%0A%20%20%2F%20%20%20%5C%20%20%20%20%0A%204%20%20%20%20%205%0Ais%20the%20duplicate%20sub-tree." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><strong><span style="font-size: 18px;">Example 2 :</span></strong></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input : </strong>
               1
             /   \ 
           2       3
<strong>Output: </strong>0
<strong>Explanation:</strong> There is no duplicate sub-tree 
in the given binary tree.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background: rgb(15, 37, 51); padding: 5px; border-radius: 0px 0px 5px 5px; display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1&amp;title=Duplicate%20subtree%20in%20Binary%20Tree%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%20%3A%20%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%201%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%2F%20%20%20%5C%20%0A%20%20%20%20%20%20%20%20%20%20%202%20%20%20%20%20%20%203%0AOutput%3A%200%0AExplanation%3A%20There%20is%20no%20duplicate%20sub-tree%20%0Ain%20the%20given%20binary%20tree." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>dupSub()</strong>&nbsp;which takes root of the tree as the only argument and returns 1 if the binary tree contains a duplicate sub-tree of size two&nbsp;or more, else 0.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> </span><span style="font-size: 18px;">O(N)<br></span><span style="font-size: 18px;"><strong>Expected Space Complexity:</strong> O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>0 ≤ Data of nodes ≤ 9<br></span>1&nbsp;<span style="font-size: 18px;">≤ Number of nodes&nbsp;</span><span style="font-size: 18px;">≤ 10<sup>5</sup></span>&nbsp;</p></div>