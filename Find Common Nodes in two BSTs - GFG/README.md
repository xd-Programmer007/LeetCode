# Find Common Nodes in two BSTs
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two Binary Search Trees. Find&nbsp;the&nbsp;nodes that are common in both of them, ie-&nbsp;find the intersection of the two BSTs.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>: Return&nbsp;</span><span style="font-size: 18px;">the common nodes in <strong>sorted </strong>order.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:
</strong></span><strong><span style="font-size: 18px;">BST1:
</span></strong> <span style="font-size: 18px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp; &nbsp; &nbsp;5
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; &nbsp; \
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;1 &nbsp; &nbsp; &nbsp;  10
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; \ &nbsp; &nbsp;  /
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; 0 &nbsp; &nbsp; 4&nbsp;&nbsp;&nbsp; 7
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  \
 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;9
</span><strong><span style="font-size: 18px;">BST2:
</span></strong> <span style="font-size: 18px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; 10 
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  / &nbsp; &nbsp;\
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;7&nbsp; &nbsp; &nbsp;20
 &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/ &nbsp; \ 
&nbsp;&nbsp; &nbsp; &nbsp; &nbsp;  4&nbsp; &nbsp; &nbsp;9
<strong>Output: </strong>4 7 9 10

</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1&amp;title=Find%20Common%20Nodes%20in%20two%20BSTs%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0ABST1%3A%0A%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%C2%A0%C2%A0%20%C2%A0%20%C2%A05%0A%20%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%2F%20%C2%A0%20%C2%A0%20%5C%0A%20%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A01%20%C2%A0%20%C2%A0%20%C2%A0%20%2010%0A%20%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%2F%20%C2%A0%20%5C%20%C2%A0%20%C2%A0%20%20%2F%0A%20%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%200%20%C2%A0%20%C2%A0%204%C2%A0%C2%A0%C2%A0%207%0A%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%20%5C%0A%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%C2%A09%0ABST2%3A%0A%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%C2%A0%2010%20%0A%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%20%2F%20%C2%A0%20%C2%A0%5C%0A%20%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A07%C2%A0%20%C2%A0%20%C2%A020%0A%20%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%2F%20%C2%A0%20%5C%20%0A%C2%A0%C2%A0%20%C2%A0%20%C2%A0%20%C2%A0%20%204%C2%A0%20%C2%A0%20%C2%A09%0AOutput%3A%204%207%209%2010%0A%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:
BST1:
</strong>&nbsp;    10
&nbsp;   /  \
&nbsp;  2   11
&nbsp; /  \
&nbsp;1   3
<strong>BST2:
</strong>&nbsp;      2
&nbsp;    /  \
&nbsp;   1    3
<strong>Output: </strong>1 2 3
</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1&amp;title=Find%20Common%20Nodes%20in%20two%20BSTs%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0ABST1%3A%0A%C2%A0%20%20%20%2010%0A%C2%A0%20%20%20%2F%20%20%5C%0A%C2%A0%20%202%20%20%2011%0A%C2%A0%20%2F%20%20%5C%0A%C2%A01%20%20%203%0ABST2%3A%0A%C2%A0%20%20%20%20%20%202%0A%C2%A0%20%20%20%20%2F%20%20%5C%0A%C2%A0%20%20%201%20%20%20%203%0AOutput%3A%201%202%203%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><strong><span style="font-size: 18px;">Your Task:</span></strong><br><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size: 18px;"><strong>&nbsp;findCommon()</strong> that takes roots of the two&nbsp;BSTs as input parameters and returns a list of integers&nbsp;containing the common nodes in&nbsp;sorted order.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N1 + N2) where N1 and N2 are the sizes of the 2 BSTs.<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(H1 + H2) where H1 and H2 are the heights of the 2 BSTs.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of Nodes &lt;= 10<sup>5</sup><br>1 &lt;= Node data &lt;= 10<sup>9</sup></span></p></div>