// sizeof 연산자
/*
 자료형의 크기를 반환하는 연산자
 sizeof 연산자는 데이터 크기를 Byte단위로 표시함

	printf("char 데이터의 크기: %lu byte \n", sizeof(char));
	printf("short 데이터의 크기: %ld byte \n", sizeof(short));
	printf("int 데이터의 크기: %ld byte \n", sizeof(int));
	printf("float 데이터의 크기: %ld byte \n", sizeof(float));
	printf("double 데이터의 크기: %ld byte \n", sizeof(double));
	printf("long 데이터의 크기: %ld byte \n", sizeof(long));
	printf("long long 데이터의 크기: %ld byte \n", sizeof(long long));

	printf("char 데이터의 크기: %lu byte \n", sizeof(3.14));  // <- 리터럴 값으로 상수를 넣게되면 double로 인식되어 8바이트로 잡히지만
	printf("char 데이터의 크기: %lu byte \n", sizeof(3.14f)); // <- f를 상수값 뒤에 붙히는 것으로 float 값으로 인식해 4바이트로 줄일 수 있음
*/