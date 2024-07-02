#include "integer_division.h"
#include <stdlib.h>
#include <limits.h>

// ��ķ�����divide
int divide(struct IntegerDivision *this, int a, int b) {
	// ����������
	if (a == INT_MIN && b == -1) {
		return INT_MAX; // ����INT_MAX����ΪINT_MIN / -1 ��32λ�з��������л����
	}
	return a / b; // ��������µ���������
}

// ��Ĺ��캯��
struct IntegerDivision * createIntegerDivision() {
	struct IntegerDivision * obj = (struct IntegerDivision *)malloc(sizeof(struct IntegerDivision));
	if (obj != NULL) {
		obj->divide = divide; // ��ʼ������ָ��
	}
	return obj;
}

// �����������
void destroyIntegerDivision(struct IntegerDivision * obj) {
	free(obj);
}