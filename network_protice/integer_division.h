#pragma once
#ifndef INTEGER_DIVISION_H
#define INTEGER_DIVISION_H

// 定义整数除法类
struct IntegerDivision {
	int(*divide)(struct IntegerDivision *, int, int); // 方法指针
};

// 创建整数除法对象的函数声明
struct IntegerDivision * createIntegerDivision();

// 销毁整数除法对象的函数声明
void destroyIntegerDivision(struct IntegerDivision * obj);


#endif /* INTEGER_DIVISION_H */