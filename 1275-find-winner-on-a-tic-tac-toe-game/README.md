<h2><a href="https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/?envType=problem-list-v2&envId=hash-table">1275. Find Winner on a Tic Tac Toe Game</a></h2><h3>Easy</h3><hr><p><strong>Tic-tac-toe</strong> is played by two players <code>A</code> and <code>B</code> on a <code>3 x 3</code> grid. The rules of Tic-Tac-Toe are:</p>

<ul>
	<li>Players take turns placing characters into empty squares <code>&#39; &#39;</code>.</li>
	<li>The first player <code>A</code> always places <code>&#39;X&#39;</code> characters, while the second player <code>B</code> always places <code>&#39;O&#39;</code> characters.</li>
	<li><code>&#39;X&#39;</code> and <code>&#39;O&#39;</code> characters are always placed into empty squares, never on filled ones.</li>
	<li>The game ends when there are <strong>three</strong> of the same (non-empty) character filling any row, column, or diagonal.</li>
	<li>The game also ends if all squares are non-empty.</li>
	<li>No more moves can be played if the game is over.</li>
</ul>

<p>Given a 2D integer array <code>moves</code> where <code>moves[i] = [row<sub>i</sub>, col<sub>i</sub>]</code> indicates that the <code>i<sup>th</sup></code> move will be played on <code>grid[row<sub>i</sub>][col<sub>i</sub>]</code>. return <em>the winner of the game if it exists</em> (<code>A</code> or <code>B</code>). In case the game ends in a draw return <code>&quot;Draw&quot;</code>. If there are still movements to play return <code>&quot;Pending&quot;</code>.</p>

<p>You can assume that <code>moves</code> is valid (i.e., it follows the rules of <strong>Tic-Tac-Toe</strong>), the grid is initially empty, and <code>A</code> will play first.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/22/xo1-grid.jpg" style="width: 244px; height: 245px;" />
<pre>
<strong>Input:</strong> moves = [[0,0],[2,0],[1,1],[2,1],[2,2]]
<strong>Output:</strong> &quot;A&quot;
<strong>Explanation:</strong> A wins, they always play first.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/22/xo2-grid.jpg" style="width: 244px; height: 245px;" />
<pre>
<strong>Input:</strong> moves = [[0,0],[1,1],[0,1],[0,2],[1,0],[2,0]]
<strong>Output:</strong> &quot;B&quot;
<strong>Explanation:</strong> B wins.
</pre>

<p><strong class="example">Example 3:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/09/22/xo3-grid.jpg" style="width: 244px; height: 245px;" />
<pre>
<strong>Input:</strong> moves = [[0,0],[1,1],[2,0],[1,0],[1,2],[2,1],[0,1],[0,2],[2,2]]
<strong>Output:</strong> &quot;Draw&quot;
<strong>Explanation:</strong> The game ends in a draw since there are no moves to make.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= moves.length &lt;= 9</code></li>
	<li><code>moves[i].length == 2</code></li>
	<li><code>0 &lt;= row<sub>i</sub>, col<sub>i</sub> &lt;= 2</code></li>
	<li>There are no repeated elements on <code>moves</code>.</li>
	<li><code>moves</code> follow the rules of tic tac toe.</li>
</ul>
