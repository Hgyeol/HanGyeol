# [Platinum V] 피보나치 수와 최대공약수 - 11778 

[문제 링크](https://www.acmicpc.net/problem/11778) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

유클리드 호제법, 분할 정복을 이용한 거듭제곱, 수학, 정수론

### 제출 일자

2025년 3월 27일 23:47:30

### 문제 설명

<p style="user-select: auto !important;">피보나치 수는 0과 1로 시작한다. 0번째 피보나치 수는 0이고, 1번째 피보나치 수는 1이다. 그 다음 2번째 부터는 바로 앞 두 피보나치 수의 합이 된다.</p>

<p style="user-select: auto !important;">이를 식으로 써보면 F<sub style="user-select: auto !important;">n</sub> = F<sub style="user-select: auto !important;">n-1</sub> + F<sub style="user-select: auto !important;">n-2</sub> (n ≥ 2)가 된다.</p>

<p style="user-select: auto !important;">n=17일때 까지 피보나치 수를 써보면 다음과 같다.</p>

<p style="user-select: auto !important;">0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597</p>

<p style="user-select: auto !important;">n과 m이 주어졌을 때, n번째 피보나치 수와 m번째 피보나치 수의 최대공약수를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p style="user-select: auto !important;">첫째 줄에 n과 m이 주어진다. n과 m은 1,000,000,000,000,000,000보다 작거나 같은 자연수이다.</p>

### 출력 

 <p style="user-select: auto !important;">첫째 줄에 n번째 피보나치 수와 m번째 피보나치 수의 최대공약수를 1,000,000,007으로 나눈 나머지를 출력한다.</p>

