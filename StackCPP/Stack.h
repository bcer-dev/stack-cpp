#pragma once
#include <stdexcept>

class Stack
{
private:
	int* items;
	int max;
	int count;

public:
	Stack(int n);
	~Stack();
	bool is_empty();
	void push(int n);
	int peek();
	int pop();
};

