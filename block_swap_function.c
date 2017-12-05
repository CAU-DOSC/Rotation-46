#include <stdio.h>

void swap(char arr[], int a, int b, int d)
{
	for (int i = 0;i < d;++i)
	{
		char temp = arr[a + i];
		arr[a + i] = arr[b + i];
		arr[b + i] = temp;
	}
}

void block_swap(char arr[], int n, int d)
{
	int temp = 0, pos_d = 0, temp_d = 0;
	if (d == 0 || d == n)//d가 0이면 arr을 유지
		return;
	else if (d < 0)		//d가 음수면, 양수로 바꾼 후 왼쪽으로밀기
	{
		pos_d = -d;
		int sizeA = pos_d;
		int sizeB = n - pos_d;
		while (sizeA != sizeB)
		{
			if (sizeA < sizeB)
			{
				swap(arr, pos_d - sizeA, pos_d + sizeB - sizeA, sizeA);
				sizeB -= sizeA;
			}
			else
			{
				swap(arr, pos_d - sizeA, pos_d, sizeB);
				sizeA -= sizeB;
			}
		}
		swap(arr, pos_d - sizeA, pos_d, sizeA);
	}
	else			//d가 양수면,  오른쪽으로 밀기
	{	
		temp_d = (n - d);
		int sizeA = temp_d;
		int sizeB = n - temp_d;
		while (sizeA != sizeB)
		{
			if (sizeA < sizeB)
			{
				swap(arr, temp_d - sizeA, temp_d + sizeB - sizeA, sizeA);
				sizeB -= sizeA;
			}
			else
			{
				swap(arr, temp_d - sizeA, temp_d, sizeB);
				sizeA -= sizeB;
			}
		}
		swap(arr, temp_d - sizeA, temp_d, sizeA);
	}
}