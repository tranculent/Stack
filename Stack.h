#pragma once
#include <iostream>
using namespace std;

class Stack {
public:
	Stack(int size);
	void push(int x);
	void pop();
	void display();
	bool isEmpty();
	bool isFull();
	int last();
	int front();

private:
	int top;
	int* stack;
	int size;

};

