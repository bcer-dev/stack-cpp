#include "Stack.h"

Stack::Stack(int n)
{
	count = 0;
	max = n;
	items = new int[n];
}

Stack::~Stack()
{
	delete[] items;
}

bool Stack::is_empty()
{
	return count == 0;
}

void Stack::push(int n)
{
	if (count == max)
		throw std::exception("Stack full.\n");
	items[count++] = n;
}

int Stack::peek()
{
	if (is_empty())
		throw std::exception("Stack is empty.\n");
	return items[count - 1];
}

int Stack::pop()
{
	if (is_empty())
		throw std::exception("Stack is empty.\n");
	return items[--count];
}