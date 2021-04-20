#include <stdio.h>
#include <stdlib.h>
#include "head.h"

// ˳��ջ
typedef struct {
	// ��̬����洢ջԪ��
	element_type data[MAXSIZE];
	// ջ��ָ��
	int top;
} SequenceStack;

// ��ʼ��˳��ջ
int InitSequenceStack(SequenceStack* stack) {
	stack->top = -1;
	return 0;
}

// �ж�˳��ջ�Ƿ�Ϊ��
int IsSequenceStackEmpty(SequenceStack stack) {
	if (stack.top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

// ��Ԫ������˳��ջ
int PushSequenceStack(SequenceStack* stack, element_type elem) {
	// ջ���޷�����Ԫ��
	if (stack->top == MAXSIZE - 1) {
		printf("PushSequenceStack:ջ���޷���������Ԫ�أ�");
		return 1;
	}
	//// ָ���һ
	//stack->top += 1;
	//// ��Ԫ����ջ
	//stack->data[stack->top] = elem;
	// ��һ����ջ
	stack->data[++stack->top] = elem;
	return 0;
}

// ��Ԫ�ص���˳��ջ
int PopSequenceStack(SequenceStack* stack, element_type* elem) {
	// ջ���޷�ɾ��Ԫ��
	if (stack->top == -1) {
		printf("PopSequenceStack:ջ���޷���������Ԫ�أ�");
		return 1;
	}
	// �������ٳ�ջ
	*elem = stack->data[stack->top--];
	return 0;
}

// ��ȡ˳��ջջ��Ԫ��
int GetSequenceStackTop(SequenceStack* stack, element_type* elem) {
	// ջ���޷���ȡԪ��
	if (stack->top == -1) {
		printf("PopSequenceStack:ջ���޷���ȡԪ�أ�");
		return 1;
	}
	// �������ٳ�ջ
	*elem = stack->data[stack->top];
	return 0;
}