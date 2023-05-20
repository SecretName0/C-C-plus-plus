// continue문
/*
현재 반복에서 명령문의 실행을 종료하고 반복문의 처음으로 돌아가여 반복문의 다음 코드를 실행하는 명령문

#include <stdio.h>
int main(void)
{
	int a;

	for (a = 0; a < 5; a++)
	{
		if (a == 3)
			continue; // a의 값이 0부터해서 1씩 5까지 오르는데, a가 3이 되었을 때에만 작동을 멈추고 다시 돌아가 3을 건너뜀

		printf("a값: %d \n", a);
	}
}
*/