#include <stdio.h>
#include "integer_division.h"

int main() {
	// ��������
	struct IntegerDivision * obj = createIntegerDivision();

	// ʹ�ö���ķ���
	int a = 12; // ������-2147483648
	int b = 4; // ����-1
	
	int result = obj->divide(obj, a, b);
	printf("Result of division: %d\n", result);

	// ���ٶ���
	destroyIntegerDivision(obj);

	return 0;
}