<프로젝트 개요>
 
 1. Input data 
   ·n  d   CharArrayOfLengthN 
     - d > 0 : clockwise rotation  
     - d < 0 : counterclockwise rotation

 2. Program 
   ·4 functions of rotation returns with result 
     - Trivial solution / juggling / block-swap / reverse 
   ·Main routine handling I/O and invoke functions 
     - Main(): generate test case(input data) to compare time complexity of 4 methods

 3. Output data 
   ·Time elapsed for rotating data for 4 methods respectively 
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






 
