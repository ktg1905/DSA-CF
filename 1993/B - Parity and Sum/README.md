<h2><a href="https://codeforces.com/contest/1993/problem/B" target="_blank" rel="noopener noreferrer">1993B — Parity and Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1993B](https://codeforces.com/contest/1993/problem/B) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Parity and Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an array $$$a$$$ of $$$n$$$ positive integers.</p><p>In one operation, you can pick any pair of indexes $$$(i, j)$$$ such that $$$a_i$$$ and $$$a_j$$$ have <span class="tex-font-style-bf">distinct</span> parity, then replace the smaller one with the sum of them. More formally: </p><ul> <li> If $$$a_i  \lt  a_j$$$, replace $$$a_i$$$ with $$$a_i + a_j$$$; </li><li> Otherwise, replace $$$a_j$$$ with $$$a_i + a_j$$$. </li></ul><p>Find the minimum number of operations needed to make all elements of the array have the same parity.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of operations required.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003292616786373823" id="id006554981142294225" class="input-output-copier">Copy</div></div><pre data-content="7
5
1 3 5 7 9
4
4 4 4 4
3
2 3 4
4
3 2 2 8
6
4 3 6 1 2 1
6
3 6 1 2 1 2
5
999999996 999999997 999999998 999999999 1000000000
" id="id003292616786373823"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 3 5 7 9</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">4 4 4 4</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3 4</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">3 2 2 8</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">4 3 6 1 2 1</div><div class="test-example-line test-example-line-even test-example-line-6">6</div><div class="test-example-line test-example-line-even test-example-line-6">3 6 1 2 1 2</div><div class="test-example-line test-example-line-odd test-example-line-7">5</div><div class="test-example-line test-example-line-odd test-example-line-7">999999996 999999997 999999998 999999999 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011803304939932058" id="id007396694840131894" class="input-output-copier">Copy</div></div><pre id="id0011803304939932058">0
0
2
4
3
3
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, all integers already have the same parity. Therefore, no operation is needed.</p><p>In the third test case, we can perform two operations $$$(1, 2)$$$ and $$$(1, 3)$$$. The array $$$a$$$ transforms as follows: $$$a = [\color{red}2, \color{red}3, 4] \longrightarrow [\color{red}5, 3, \color{red}4] \longrightarrow [5, 3, 9]$$$.</p><p>In the fourth test case, an example of an optimal sequence of operations is $$$(1, 2)$$$, $$$(1, 3)$$$, $$$(1, 4)$$$, and $$$(1, 4)$$$. The array $$$a$$$ transforms as follows: $$$a = [\color{red}3, \color{red}2, 2, 8] \longrightarrow [\color{red}3, 5, \color{red}2, 8] \longrightarrow [\color{red}3, 5, 5, \color{red}8] \longrightarrow [\color{red}{11}, 5, 5, \color{red}8] \longrightarrow [11, 5, 5, 19]$$$.</p></div>