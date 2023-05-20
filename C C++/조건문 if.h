// 조건문
		/* // 어떠한 조건이 주어질 때 해당 조건에 따라 동작을 실행하는 명령문.

		 조건문들의 형태

			  if: if문은 조건이 참이 되지 않으면 조건문 내의 내용이 실행되지 않음

			  else if: if문이 거짓일 경우 실행됨. 마찬가지로 해당 내용도 참이 되지 않을 시 제대로 실행되지 않음

			  else: if문과 else if 둘 다 거짓일 때 실행됨

			  * 만일 if문과 else if문이 모두 참일 시 if문 실행
			  * else if문은 if문과 esle문 사이에 얼마든 추가(선언) 할 수 있음
			  * else문 밑에는 더 이상 else if의 조건문을 설정할 수 없다.
			  * if, else if, else문은 사실상 일종의 세트라 볼 수 있음
			  * if문 선언 시 else if와 else는 추가적인 조건일 뿐, 없어도 실행에는 문제 없음
			  * if문은 독립적인 조건문이기에 if문과 else if 밑에 if를 사용하게 되면 서로 다른 조건문으로 인식함

			  switch: 특정 조건일 때만 실행되는 조건문
		*/

		// if 예시
		/*
			int a = 0

			if(a=0)	<< a의 값이 0이기 때문에 이 구문이 작동됨
			cout << "변수 a의 값은 0입니다" << endl;
		*/

		// else if 예시
		/*
			int a = 1;

			if (a=0)
			cout << "변수 a의 값은 0입니다" << endl;

			else if (a=1) << a의 값이 1이기 때문에 이 구문이 작동됨
			cout << "변수 a의 값은 1입니다" << endl;
		*/

		// else 예시
		/*
			int a = 3;

			if (a=0)
			cout << "변수 a의 값은 0입니다" << endl;

			else if (a=1)
			cout << "변수 a의 값은 1입니다" << endl;

			else	<< 선술된 if와 else if문 모두 거짓이기 때문에 이 구문이 작동됨
			cout << "변수 a의 값은" << a << "입니다 << endl;
		*/
