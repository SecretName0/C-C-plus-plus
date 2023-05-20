// for
/*
	 반복문: 프로그램에서 특정한 작업을 반복적으로 수행하는 명령문

	 for: 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문

형태: for(초기식(변수); 조건식; 초기식 증감)
	 {
	   printf("ㅇㅇ");
	 }

	ex) 구구단
	int x, y;

	for (x = 2; x <= 9; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			printf("%d x %d = %d \n", x, y, x * y);
		}
		printf("\n");
	}

*/

// for문으로 팩토리얼 구현
/*
int main(void)
{
	int a = 0;
	int result = 1; // 0으로 선언하면 곱한 값을 담을 수 없음

	scanf_s("%d", &a);
	printf("입력한 수: %d \n", a);
	printf("%d! = ", a);

	for (int i=a; i > 0; i--)
	{
		if (i > 1)
		{
			printf("%d*", i);
		}
		else
		{
			printf("%d", i);
		}
		result *= i;
	}
	printf("= %d", result);
}
*/