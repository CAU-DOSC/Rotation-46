#include "header.h"
#include <string.h>

int main(void)
{
	int strlength[3];
	int distance[3];

	char*str = NULL;
	int n, d;
	int *pn = &n;
	int *pd = &d;

	char*str2 = NULL;
	char*str3 = NULL;
	char*str4 = NULL;

	clock_t start, finish;
	long double duration;

	long double duration_arr[3][4];

	for (int i = 0; i < 3; i++)
	{
		printf("문자열 길이 입력: ");
		str = genrate_input_data(str, &n);
		printf("rotate 시킬 크기 입력: ");
		scanf("%d", &d);
		strlength[i] = strlen(str) - 4;
		distance[i] = d;
		str2 = (char *)malloc(sizeof(char)* (*pn));
		str3 = (char *)malloc(sizeof(char)* (*pn));
		str4 = (char *)malloc(sizeof(char)* (*pn));
		strcpy(str2, str);
		strcpy(str3, str);
		strcpy(str4, str);

		//함수 실행
		////trivial

		start = clock();
		T_trivial(n, d, str); //함수
		finish = clock();
		duration = finish - start;
		long double dur1 = duration / CLOCKS_PER_SEC;

		////juggling
		start = clock();
		Juggling(str2, d, n); //함수
		finish = clock();
		duration = finish - start;
		long double dur2 = duration / CLOCKS_PER_SEC;

		////block swap
		start = clock();
		block_swap(str3, n, d); //함수
		finish = clock();
		duration = finish - start;
		long double dur3 = duration / CLOCKS_PER_SEC;

		////reverse
		start = clock();
		_reverse(str4, d, n); //함수
		finish = clock();
		duration = finish - start;
		long double dur4 = duration / CLOCKS_PER_SEC;

		//배열에다가 함수실행시간을 저장(1행~4행)
		duration_arr[i][0] = dur1;
		duration_arr[i][1] = dur2;
		duration_arr[i][2] = dur3;
		duration_arr[i][3] = dur4;


		//빈 문자열로 초기화
		str[0] = "\0";
		str2[0] = "\0";
		str3[0] = "\0";
		str4[0] = "\0";


	}


	printf("\n");
	//rotate하는데 걸린 시간
	printf("STRLength\t ROTATEdistance\t T.trivial\t T.juggle\t T.blockswap\t T.reverse\t\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d\t\t %d\t\t %lf\t %lf\t %lf\t %lf\t\n", strlength[i], distance[i], duration_arr[i][0], duration_arr[i][1], duration_arr[i][2], duration_arr[i][3]);
	}

	return 0;
}