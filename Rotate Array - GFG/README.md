# Rotate Array
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an unsorted array <strong>arr[]</strong> of size <strong>N.</strong>&nbsp;Rotate the array to the left (counter-clockwise direction) by <strong>D</strong> steps, where&nbsp;<strong>D</strong>&nbsp;is a positive integer.&nbsp;</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:
</strong>N = 5, D = 2
arr[] = {1,2,3,4,5}
<strong>Output: </strong>3 4 5 1 2
<strong>Explanation: </strong>1 2 3 4 5&nbsp; when rotated
by 2 elements, it becomes 3 4 5 1 2.</span></pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1&amp;title=Rotate%20Array%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%205%2C%20D%20%3D%202%0Aarr%5B%5D%20%3D%20%7B1%2C2%2C3%2C4%2C5%7D%0AOutput%3A%203%204%205%201%202%0AExplanation%3A%201%202%203%204%205%C2%A0%20when%20rotated%0Aby%202%20elements%2C%20it%20becomes%203%204%205%201%202." class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre style="margin-bottom: 0px;"><span style="font-size: 18px;"><strong>Input:
</strong>N = 10, D = 3
arr[] = {2,4,6,8,10,12,14,16,18,20}
<strong>Output: </strong>8 10 12 14 16 18 20 2 4 6<strong>
Explanation: </strong>2 4 6 8 10 12 14 16 18 20&nbsp;
when rotated by 3 elements, it becomes 
8 10 12 14 16 18 20 2 4 6.</span>
</pre><div class="saveCodeBtnTag" style="text-align:right; margin-bottom:17px;"><span class="saveCodeBtnSpan saveCodeBtnTag" style="background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;" onmouseover="this.style=`background:#797979;;padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`" ;="" onmouseout="this.style=`background:#0f2533; padding: 5px; border-radius: 0 0 5px 5px;  display: inline-block;`;"><a src="?&amp;url=https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1&amp;title=Rotate%20Array%20%7C%20Practice%20%7C%20GeeksforGeeks&amp;hashtags=&amp;code=Input%3A%0AN%20%3D%2010%2C%20D%20%3D%203%0Aarr%5B%5D%20%3D%20%7B2%2C4%2C6%2C8%2C10%2C12%2C14%2C16%2C18%2C20%7D%0AOutput%3A%208%2010%2012%2014%2016%2018%2020%202%204%206%0AExplanation%3A%202%204%206%208%2010%2012%2014%2016%2018%2020%C2%A0%0Awhen%20rotated%20by%203%20elements%2C%20it%20becomes%20%0A8%2010%2012%2014%2016%2018%2020%202%204%206.%0A" class="saveCodeBtn saveCodeBtnTag" style="color: white; text-decoration: none; text-shadow: none; background-color: transparent;"><img src="chrome-extension://annlhfjgbkfmbbejkbdpgbmpbcjnehbb/images/saveicon.png" style="margin:0; display: inline-block; vertical-align: middle; height: 19px; width: 19px;background: #ffffff00; border: none;" class="saveCodeBtnTag"> Save</a><a></a></span></div>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your&nbsp;Task:</strong><br>You need not print or read anything. You need to complete the function <strong>rotateArr</strong>() which takes the array, D and N as input parameters and&nbsp;rotates the array by D elements. The array must be modified in-place without using extra space.&nbsp;</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10</span><sup><span style="font-size: 15px;">6</span></sup><br><span style="font-size: 18px;">1 &lt;= D &lt;= 10<sup>6</sup></span><br><span style="font-size: 18px;">0 &lt;=&nbsp;arr[i] &lt;= 10</span><sup>5</sup></p></div>