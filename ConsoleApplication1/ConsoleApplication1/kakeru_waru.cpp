
#include <stdio.h>

int main(void) {
	int a, b;
	printf("�|���Z����Z�����܂��B��������͂��Ă�������A\n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);

	int sum = a * b;
	int difference = a / b;

	printf("%d*%d", a, b);
	printf(" = %d\n", sum);
	printf("%d/%d", a, b);
	printf(" = %d\n", difference);

	return 0;
}

