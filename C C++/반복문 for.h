// for
/*
	 �ݺ���: ���α׷����� Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ�

	 for: �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� �ݺ���

����: for(�ʱ��(����); ���ǽ�; �ʱ�� ����)
	 {
	   printf("����");
	 }

	ex) ������
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

// for������ ���丮�� ����
/*
int main(void)
{
	int a = 0;
	int result = 1; // 0���� �����ϸ� ���� ���� ���� �� ����

	scanf_s("%d", &a);
	printf("�Է��� ��: %d \n", a);
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