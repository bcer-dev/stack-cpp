#include <iostream>
#include "Stack.h"

using std::cout;

int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.is_empty())
        cout << s.pop() << "\n";

    return 0;
}