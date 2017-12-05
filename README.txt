<������Ʈ ����>
 
 1. Input data 
   ��n  d   CharArrayOfLengthN 
     - d > 0 : clockwise rotation  
     - d < 0 : counterclockwise rotation

 2. Program 
   ��4 functions of rotation returns with result 
     - Trivial solution / juggling / block-swap / reverse 
   ��Main routine handling I/O and invoke functions 
     - Main(): generate test case(input data) to compare time complexity of 4 methods

 3. Output data 
   ��Time elapsed for rotating data for 4 methods respectively 
     - Series of  4 results to show the difference

   - - -
  
<���Һд�>

 - main : ������

 - trivial solution : ������

 - juggling : ������

 - block-swap : �����

 - reverse : �㺸��

 - Readme : ���
 
   - - -
  
<Function descriptions>
  
 - gcd : �Էƹ��� �� ������ �ִ������� ����ϴ� �Լ�
 
 - Juggling : ���ڿ��� rotate��ų ũ�� d, ���ڿ��� ������ n�� �Է¹޾� Juggling Algorithm�� �̿��Ͽ� rotate��Ű�� �Լ�
 
 - reverse : arr[start]���� arr[end]���� reverse �ϴ� �Լ�
 
 - _reverse : ���ڿ��� rotate��ų ũ�� d, ���ڿ��� ������ n�� �Է¹޾� reverse�� �̿��Ͽ� rotate��Ű�� �Լ�

 - T_trivial : ���ڿ��� rotate��ų ũ�� d, ���ڿ��� ������ n�� �Է¹޾� Trivial solution�� �̿��Ͽ� rotate��Ű�� �Լ�
 
 - swap : ���ڿ��� ���ڿ����� ���� swap��ų ��ġ�� a,b �׸��� �ٲ� ũ�� d�� �Է¹޾� a,b ��ġ���� ũ�� d��ŭ�� ���ڿ��� ���� swap�ϴ� �Լ�-block_swap���� ���������� swap�� �ϱ� ���� �����Ͽ� ����Ѵ�.

 - block_swap : ���ڿ��� rotate��ų ũ�� d, ���ڿ��� ������ n�� �Է¹޾� block-swap�� �̿��Ͽ� rotate��Ű�� �Լ�-���� block�� ���� block�� ���̸� ���� ��, ����Լ��� �̿��� ���������� swap�� �ϴ� ���
 
   - - -

Test Case
[strLength]  [rotate distance]  [T.trivial]    [T.juggle]     [T.bw]      [T.reverse]
10000000     12342              301.276        0.156          0.032       0.046
50           1                  0              0              0           0  
10000        6657               1.639          0              0           0






 
