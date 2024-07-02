#include "integer_division.h"
#include <stdlib.h>
#include <limits.h>

// 类的方法：divide
int divide(struct IntegerDivision *this, int a, int b) {
	// 处理溢出情况
	if (a == INT_MIN && b == -1) {
		return INT_MAX; // 返回INT_MAX，因为INT_MIN / -1 在32位有符号整数中会溢出
	}
	return a / b; // 正常情况下的整数除法
}

// 类的构造函数
struct IntegerDivision * createIntegerDivision() {
	struct IntegerDivision * obj = (struct IntegerDivision *)malloc(sizeof(struct IntegerDivision));
	if (obj != NULL) {
		obj->divide = divide; // 初始化方法指针
	}
	return obj;
}

// 类的析构函数
void destroyIntegerDivision(struct IntegerDivision * obj) {
	free(obj);
}