// 배열
/*
 같은 자료형의 변수들로 이루어진 유한 집합

  ex) int space[5];                                   spcae [0] [1] [2]  [3] [4]
  // 만일 이 배열을 효율 적으로 쓰고 싶다면 int space[5] = {10 ,20 ,30 ,40 ,50}; 이런식으로 만들면 더욱 효율적으로 쓸 수 있다.
  // 배열된 변수의 시작점은 '0'부터 시작함. 예시는 int지만 char, float등 다양하게 쓸 수 있음
  // 배열의 크기는 컴파일 되는 시점부터 고정된 메모리 공간을 갖게된다.
  // 만약 모든 수를 0으로 만들고 싶을 경우 { 0,}; 로 처리하면 모두 0이 되고 만일 0이 아닌 다른 수를 넣으면 0번째 인덱스(공간)만 지정한 값이 되고
  뒤는 모두 0이 된다.
  // 배열의 이름은 배열의 시작주소를 의미한다

  space[0] = 10;
  space[1] = 20;
  space[2] = 30;
  space[3] = 40;
  space[4] = 50;

  printf("space[0]의 값: %d \n", space[0]);
  printf("space[1]의 값: %d \n", space[1]);
  printf("space[2]의 값: %d \n", space[2]);
  printf("space[3]의 값: %d \n", space[3]);
  printf("space[4]의 값: %d \n", space[4]);

*/

// 2차원 배열
/*
 ex) int array [4][3]
 [행의 길이(세로)] [열의 길이(가로)]
 [][][]
 [][][]   <- [4(행)][3(열)]
 [][][]
 [][][]

 간단한 맵 제작
 #include <stdio.h>

int main(void)
{
	int array[10][10] = // 0: 길, 1: 벽, 2: 스타트, 3: 도착
	{
		{2,1,1,1,1,1,1,1,1,1},
		{0,1,1,1,1,1,1,1,1,1},
		{0,0,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1},
		{1,1,0,1,1,1,1,1,1,1},
		{1,0,0,1,1,0,0,0,0,1},
		{1,0,1,1,1,0,1,1,0,1},
		{1,0,0,0,0,0,1,0,0,1},
		{1,1,1,1,1,1,1,0,1,0},
		{1,1,1,1,1,1,1,0,0,3}
	};

	for (int i = 0; i < 10; i++)
	{
		for (int a = 0; a < 10; a++)
		{
			if (array[i][a] == 1)
				printf("■");
			else if (array[i][a] == 0)
				printf("□");
			else if (array[i][a] == 2)
				printf("▣");
			else if (array[i][a] == 3)
				printf("▶");
		}
		printf("\n");
	}
	return 0;
*/