<프로젝트 개요>
 
 1. Input data 
   · n  d   CharArrayOfLengthN 
     - d > 0 : clockwise rotation  
     - d < 0 : counterclockwise rotation

 2. Program 
   · 4 functions of rotation returns with result 
     - Trivial solution / juggling / block-swap / reverse 
   · Main routine handling I/O and invoke functions 
     - Main(): generate test case(input data) to compare time complexity of 4 methods

 3. Output data 
   · Time elapsed for rotating data for 4 methods respectively 
     - Series of  4 results to show the difference

   - - -
  
<역할분담>

 - main : 박준형

 - trivial solution : 김찬현

 - juggling : 윤찬솔

 - block-swap : 전희수

 - reverse : 허보성

 - Readme : 모두
 
   - - -
  
<Function descriptions>
  
 - gcd : 입렵받은 두 정수의 최대공약수를 출력하는 함수
 
 - Juggling : 문자열과 rotate시킬 크기 d, 문자열의 길이인 n을 입력받아 Juggling Algorithm을 이용하여 rotate시키는 함수
 
 - reverse : arr[start]부터 arr[end]까지 reverse 하는 함수
 
 - _reverse : 문자열과 rotate시킬 크기 d, 문자열의 길이인 n을 입력받아 reverse를 이용하여 rotate시키는 함수

 - T_trivial : 문자열과 rotate시킬 크기 d, 문자열의 길이인 n을 입력받아 Trivial solution을 이용하여 rotate시키는 함수
 
 - swap : 문자열과 문자열에서 서로 swap시킬 위치인 a,b 그리고 바꿀 크기 d를 입력받아 a,b 위치에서 크기 d만큼의 문자열을 서로 swap하는 함수-block_swap에서 연속적으로 swap을 하기 위해 정의하여 사용한다.

 - block_swap : 문자열과 rotate시킬 크기 d, 문자열의 길이인 n을 입력받아 block-swap을 이용하여 rotate시키는 함수-앞의 block과 뒤의 block의 길이를 비교한 후, 재귀함수를 이용해 연속적으로 swap을 하는 방식
 
   - - -

Test Case
[strLength]  [rotate distance]  [T.trivial]    [T.juggle]     [T.bw]      [T.reverse]
10000000     12342              301.276        0.156          0.032       0.046
50           1                  0              0              0           0  
10000        6657               1.639          0              0           0
1000000000   20                 4.695          0.468          0.375       0.298
356781       -34541             27.955         0.016          0           0

결과 추론

계산수행시간은 trivial>juggling>block swap>reverse순이다. 따라서 계산량이 trivial>juggling>block swap>reverse순으로 많다고 생각해 볼 수 있는데 이유를 추론해보자면 
trivial solution은 str 전체를 옮겨야 하는 과정을 d번 거쳐야 하므로 다른 solution과 n이 같더라도 d 값이 커질수록 시간이 오래 걸린다.
juggling은 str의 한 원소를 d만큼 자리를 옮기는 과정을 행하므로 str 전체를 옮기는 trivial solution보다는 시간이 적게 걸리지만 원소가 많아질수록 시간이 오래 걸린다.
block-swap은 str에서 d만큼의 블록을 묶은 후 재귀함수를 이용하여 연속적으로 swap을 수행하기 때문에 한 원소씩 옮기는 trivial, juggling보다 시간이 짧게 걸린다.
reverse는 처음에 앞 또는 뒤에서 d개의 원소를 reverse하고 그 다음 뒤 또는 앞의 나머지 n - d개의 원소를 reverse한 다음 n개의 원소를 모두 reverse하므로 d값에 상관없이 n의 값에만 영향을 받는다.



 
