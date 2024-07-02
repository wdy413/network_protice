#include <stdio.h>
#include "integer_division.h"

int main() {
	// 创建对象
	struct IntegerDivision * obj = createIntegerDivision();

	// 使用对象的方法
	int a = 12; // 被除数-2147483648
	int b = 4; // 除数-1
	
	int result = obj->divide(obj, a, b);
	printf("Result of division: %d\n", result);

	// 销毁对象
	destroyIntegerDivision(obj);

	return 0;
}