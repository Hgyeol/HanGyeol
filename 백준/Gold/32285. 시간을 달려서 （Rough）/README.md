# [Gold II] 시간을 달려서 (Rough) - 32285 

[문제 링크](https://www.acmicpc.net/problem/32285) 

### 성능 요약

메모리: 2556 KB, 시간: 0 ms

### 분류

수학, 그리디 알고리즘, 정수론

### 제출 일자

2026년 4월 27일 17:20:08

### 문제 설명

<blockquote>
<p>미처 말하지 못했어</p>

<p>다만 너를 좋아했어</p>

<p>어린 날의 꿈처럼 마치 기적처럼</p>

<p>시간을 달려서 어른이 될 수만 있다면</p>

<p>거친 세상 속에서 손을 잡아줄게</p>
</blockquote>

<p>나는 시간을 달려서 너를 만나고자 한다.</p>

<p>나와 네가 있는 세계에서 시간은 음이 아닌 정수로 나타낼 수 있다.</p>

<p>처음에 나는 시간 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container>에 있고, 너는 시간 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>G</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$G$</span></mjx-container>에 있다.</p>

<p>시간 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x$</span></mjx-container>에 있는 내가 시간을 달려 이동할 수 있는 방법은 2가지가 있다.</p>

<ul>
	<li><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi><mo>+</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x+1$</span></mjx-container>로 이동한다</li>
	<li><mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-cD7"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mo>×</mo><mi>x</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2 \times x$</span></mjx-container>로 이동한다</li>
</ul>

<p>내가 있는 시간은 이상한 구조로 되어 있기 때문에, 이동한 뒤 나의 시간이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>F</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$F$</span></mjx-container> 이상이라면 나는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4" rspace="4"><mjx-c class="mjx-c6D"></mjx-c><mjx-c class="mjx-c6F"></mjx-c><mjx-c class="mjx-c64"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi><mo lspace="thickmathspace" rspace="thickmathspace">mod</mo><mi>F</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x \bmod F$</span></mjx-container> 시간으로 이동하게 된다. 여기서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4" rspace="4"><mjx-c class="mjx-c6D"></mjx-c><mjx-c class="mjx-c6F"></mjx-c><mjx-c class="mjx-c64"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi><mo lspace="thickmathspace" rspace="thickmathspace">mod</mo><mi>F</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x \bmod F$</span></mjx-container>란 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D465 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>x</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$x$</span></mjx-container>를 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>F</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$F$</span></mjx-container>로 나눈 나머지를 의미한다.</p>

<p>내가 시간 속에 갇혀 길을 헤매지 않도록, 너의 시간에 도착하기 위해 시간을 달려 이동하는 횟수의 최솟값을 구하여라.</p>

### 입력 

 <p>첫째 줄에 양의 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>G</mi><mo>,</mo><mi>F</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$G,F$</span></mjx-container>가 주어진다.</p>

### 출력 

 <p>첫째 줄에 시간을 달려 이동하는 횟수의 최솟값을 출력하라.</p>

