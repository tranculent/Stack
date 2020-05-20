#include "Stack.h"

Stack::Stack(int size)
{
	top = -1;
	stack = new int[size];
	this->size = size;
}

void Stack::push(int x)
{
	if (top >= x - 1) {
		cout << "Stack overflow" << endl;
		return;
	}
	stack[++top] = x;
}

void Stack::pop()
{
	if (top <= -1) {
		cout << "Stack underflow" << endl;
		return;
	}
	top--;
}

void Stack::display()
{
	for (int i = top; i >= 0; i--) {
		cout << stack[i] << " ";
	}
	cout << endl;
}

bool Stack::isEmpty() {
	return top == -1;
}

bool Stack::isFull() {
	return top == size - 1;
}

int Stack::front() {
	return stack[0];
}

int Stack::last() {
	return stack[top];
}
