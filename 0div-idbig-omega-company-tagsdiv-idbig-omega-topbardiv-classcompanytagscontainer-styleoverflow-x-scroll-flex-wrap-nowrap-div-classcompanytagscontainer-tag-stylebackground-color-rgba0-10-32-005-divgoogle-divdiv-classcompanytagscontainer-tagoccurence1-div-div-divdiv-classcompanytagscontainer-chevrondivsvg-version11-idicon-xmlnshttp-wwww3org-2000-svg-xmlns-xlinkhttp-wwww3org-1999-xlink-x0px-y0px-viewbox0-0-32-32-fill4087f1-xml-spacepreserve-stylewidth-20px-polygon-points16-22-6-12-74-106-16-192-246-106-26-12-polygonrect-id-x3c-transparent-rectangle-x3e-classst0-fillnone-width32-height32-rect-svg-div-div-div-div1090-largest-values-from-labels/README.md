<h2><a href="https://leetcode.com/problems/largest-values-from-labels/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Google</div><div class="companyTagsContainer--tagOccurence">1</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>1090. Largest Values From Labels</a></h2><h3>Medium</h3><hr><div><p>There is a set of <code>n</code> items. You are given two integer arrays <code>values</code> and <code>labels</code> where the value and the label of the <code>i<sup>th</sup></code> element are <code>values[i]</code> and <code>labels[i]</code> respectively. You are also given two integers <code>numWanted</code> and <code>useLimit</code>.</p>

<p>Choose a subset <code>s</code> of the <code>n</code> elements such that:</p>

<ul>
	<li>The size of the subset <code>s</code> is <strong>less than or equal to</strong> <code>numWanted</code>.</li>
	<li>There are <strong>at most</strong> <code>useLimit</code> items with the same label in <code>s</code>.</li>
</ul>

<p>The <strong>score</strong> of a subset is the sum of the values in the subset.</p>

<p>Return <em>the maximum <strong>score</strong> of a subset </em><code>s</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> values = [5,4,3,2,1], labels = [1,1,2,2,3], numWanted = 3, useLimit = 1
<strong>Output:</strong> 9
<strong>Explanation:</strong> The subset chosen is the first, third, and fifth items.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> values = [5,4,3,2,1], labels = [1,3,3,3,2], numWanted = 3, useLimit = 2
<strong>Output:</strong> 12
<strong>Explanation:</strong> The subset chosen is the first, second, and third items.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> values = [9,8,8,7,6], labels = [0,0,0,1,1], numWanted = 3, useLimit = 1
<strong>Output:</strong> 16
<strong>Explanation:</strong> The subset chosen is the first and fourth items.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == values.length == labels.length</code></li>
	<li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= values[i], labels[i] &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>1 &lt;= numWanted, useLimit &lt;= n</code></li>
</ul>
</div>