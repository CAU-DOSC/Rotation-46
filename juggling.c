#include <stdio.h>
#include <stdlib.h>

void Juggling(char ary[], int d, int n)
{
	int i, j, k, temp;
	if (d > 0)
	{
		d = n - d;
		for (i = 0; i < gcd(d, n); i++)
		{
			temp = ary[i];
			j = i;
			while (1)
			{
				k = j + d;
				if (k >= n)
					k = k - n;
				if (k == i)
					break;
				ary[j] = ary[k];
				j = k;
			}
			ary[j] = temp;
		}
	}
	else if (d < 0)
	{
		d = -d;
		for (i = 0; i < gcd(d, n); i++)
		{
			temp = ary[i];
			j = i;
			while (1)
			{
				k = j + d;
				if (k >= n)
					k = k - n;
				if (k == i)
					break;
				ary[j] = ary[k];
				j = k;
			}
			ary[j] = temp;
		}
	}
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}
