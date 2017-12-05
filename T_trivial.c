#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void T_trivial(int n, int d, char str[])
{
	if (d > 0)
	{
		for (int i = 0; i < d ; i++)
		{
			char temp = str[n-1];
			for (int j = n-1; j > 0; j--)
			{
				str[j] = str[j - 1];
				
			}
			str[0] = temp;
		}
	}
	else if (d < 0)
	{
		for (int i = 0; i < -d; i++)
		{
			char temp = str[0];
			for (int j = 0; j < (n-1); j++)
			{
				str[j] = str[j + 1];

			}
			str[n-1] = temp;
		}
	}
}