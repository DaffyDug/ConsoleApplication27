#include <iostream>
#include "Stack.h"
#include "Queue.h"
using namespace std;
int main()
{
	Queue stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
}