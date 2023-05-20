// 열거형
/*
 반드시 하나의 값만 가지게 될 변수의 집합체

 #include <stdio.h>
enum state
{
	idle,  // 대기 상태
	attack,  // 공격 상태
	defense,  // 방어 상태
	death  // 사망 상태
	// 열거형의 값을 임의로 변경하게 되면 그 뒤에 있는 열거형의 값까지 같이 값이 변화하게 된다.
};
int main(void)
{
	enum state state;
	// 캐릭터의 상태를 지정해줄 수 있음
	// enum의 경우 정수 값이 들어가게 되며, 초기 값을 따로 설정해주지 않으면 0이 나온다.
	// enum은 상수이기 때문에 값을 바꿀 수 없다.

	state = idle;

	switch (state)
	{
		case idle: printf("대기 상태");
			break;

		case attack:printf("공격 상태");
			break;

		case defense:printf("방어 상태");
			break;

		case death:printf("사망 상태");
			break;
	}

	return 0;
}
*/
