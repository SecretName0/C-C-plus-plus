// 범용 포인터
/*
 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터

 #include <stdio.h>
// char, int, value
void Generic(char* name, void* value)
{
	if (name == "char")
		printf("%c \n", *(char*)value);
	else if (name == "int")
		printf("%d \n", *(int*)value);
	else if(name == "double")
		printf("%f \n", *(double*)value);
}

int main(void)
{
	char alphabet = 'a'; // 1byte
	int integer = 10; // 4byte
	double pi = 3.14; // 8byte

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없다

	void* ptr = &alphabet; // 변수 ptr에 alphabet의 주소를 저장함
	printf("ptr이 가리키는 값: %c \n", *(char*)ptr);
	printf("ptr의 현재 주솟값: %p \n", ptr);

	ptr = &integer;
	printf("ptr이 가리키는 값: %d \n", *(int*)ptr);
	printf("ptr의 현재 주솟값: %p \n", ptr);

	ptr = &pi;
	printf("ptr이 가리키는 값: %f \n", *(double*)ptr);
	printf("ptr의 현재 주솟값: %p \n", ptr);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는 변수의 자료형으로 형 변환을 해주어야 한다

	Generic("char", &alphabet); // 문자 'a'
	Generic("int", &integer); // 정수 10
	Generic("double", &pi); // 실수 3.14

	return 0;
}
*/
