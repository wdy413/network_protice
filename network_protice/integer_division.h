#pragma once
#ifndef INTEGER_DIVISION_H
#define INTEGER_DIVISION_H

// ��������������
struct IntegerDivision {
	int(*divide)(struct IntegerDivision *, int, int); // ����ָ��
};

// ����������������ĺ�������
struct IntegerDivision * createIntegerDivision();

// ����������������ĺ�������
void destroyIntegerDivision(struct IntegerDivision * obj);


#endif /* INTEGER_DIVISION_H */