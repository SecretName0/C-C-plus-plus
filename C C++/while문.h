// while문
/*

	조건이 계속될 때까지 계속해서 반복하는 반복문(= 조건이 계속 참이면 무한히 반복함. ex/ while(1) [1은 참을 나타내기 때문에 무한히 반복])

	while문을 이용한 구구단
		int a, b;
		a = 2;
		b = 1;

	while (a <= 9)
	{
		printf("%d단 \n", a);
		while (b <= 9)
		{
			printf("%d x %d = %d \n", a, b, a * b);
			b++;
		}
		printf("\n");
		a++;
		b = 1;
	}

*/

// do-while문
/*
조건에 따라 내용이 거짓이라도 최소 1번은 실행하는 반복문

do
{
 내용
} while(조건)
*/